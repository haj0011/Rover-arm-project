// Code for PICO 
// TODO, FIX IK IMPLEMENTATOIN FOR SERVOS radians to degrees 



#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include "Adafruit_BMP3XX.h"
#include <utility/imumaths.h>
#include <time.h>
#include <Servo.h>
#include <SPI.h>
#include <SD.h>

#define MotorINT1 20
#define MotorINT2 21
#define MotorPWM 22
#define servoPin1 8
#define servoPin2 9
#define servoPin3 10
#define servoPin4 11
#define SD_CS 17

#define SEALEVELPRESSURE_HPA (1013.25)

unsigned long currentTime = 0;
unsigned long lastTime = 0;

// Check I2C device address and correct line below (by default address is 0x29 or 0x28)
//                                   id, address
Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28, &Wire);
Adafruit_BMP3XX bmp;

Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup() {
  Serial.begin(115200);
  delay(1000);

  while (!Serial) {
    delay(10);
  }
  SPI.begin();

  if (!SD.begin(SD_CS)) {
    Serial.println("SD initialization failed!");
    while (1)
      ;
  }

  /* Initialise the sensor */
  if (!bno.begin()) {
    /* There was a problem detecting the BNO055 ... check your connections */
    Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
    while (1)
      ;
  }
  if (!bmp.begin_I2C()) {  // hardware I2C mode, can pass in address & alt Wire
                           //if (! bmp.begin_SPI(BMP_CS)) {  // hardware SPI mode
                           //if (! bmp.begin_SPI(BMP_CS, BMP_SCK, BMP_MISO, BMP_MOSI)) {  // software SPI mode
    Serial.println("Could not find a valid BMP3 sensor, check wiring!");
    while (1)
      ;
  }


  // Set up oversampling and filter initialization
  bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);
  bmp.setPressureOversampling(BMP3_OVERSAMPLING_4X);
  bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);
  bmp.setOutputDataRate(BMP3_ODR_50_HZ);

  pinMode(MotorINT1, OUTPUT);
  pinMode(MotorINT2, OUTPUT);
  pinMode(MotorPWM, OUTPUT);

  digitalWrite(MotorINT1, LOW);
  digitalWrite(MotorINT2, LOW);
  analogWrite(MotorPWM, 0);

  s1.attach(servoPin1);
  s2.attach(servoPin2);
  s3.attach(servoPin3);
  s4.attach(servoPin4);
  createLogFile(); 
}

void loop() {
  currentTime = millis();

  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');
    if (data[0] == 'M') {
      motorControl(data);
    }
  }

  if (currentTime - lastTime >= 500) {
    String sensorData = readSensors();
    writeSD(sensorData); 
    lastTime = currentTime;
  }
}

void motorControl(String data) {
  
  //Data should come in like M,255,1,90,90,270,180\n
  data.trim();  // Remove '\n' and whitespace
  data = data.substring(2); // Removes M, 

  int values[6];
  int start = 0;

  for (int i = 0; i < 6; i++) {
    int dataValue = data.indexOf(',', start);

    if (dataValue == -1) {
      values[i] = data.substring(start).toInt();
      break;
    }

    values[i] = data.substring(start, dataValue).toInt();
    start = dataValue + 1;
  }

  int motorSpeed = values[0];      //0 -255
  int motorDirection = values[1];  //1 is left 0 is right 2 is Force STOP
  int S1 = values[2];              // 60-270
  int S2 = values[3];              //  60-270
  int S3 = values[4];              //  60-270
  int S4 = values[5];              //  60-270

  if (motorDirection == 1) {
    digitalWrite(MotorINT1, HIGH);
    digitalWrite(MotorINT2, LOW);
  } else if (motorDirection == 0) {
    digitalWrite(MotorINT1, LOW);
    digitalWrite(MotorINT2, HIGH);
  }

  if (motorDirection == 2) {
    digitalWrite(MotorINT1, HIGH);
    digitalWrite(MotorINT2, HIGH);
    analogWrite(MotorPWM, 0);
  } else {
    analogWrite(MotorPWM, motorSpeed);
  }

  //Servos Write
  s1.write(S1);
  s2.write(S2);
  s3.write(S3);
  s4.write(S4);
}

String readSensors() {
  String data = "";
  sensors_event_t orientationData, angVelocityData, linearAccelData, magnetometerData, accelerometerData, gravityData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  //bno.getEvent(&angVelocityData, Adafruit_BNO055::VECTOR_GYROSCOPE);
  //bno.getEvent(&linearAccelData, Adafruit_BNO055::VECTOR_LINEARACCEL);
  //bno.getEvent(&magnetometerData, Adafruit_BNO055::VECTOR_MAGNETOMETER);
  bno.getEvent(&accelerometerData, Adafruit_BNO055::VECTOR_ACCELEROMETER);
  //bno.getEvent(&gravityData, Adafruit_BNO055::VECTOR_GRAVITY);

  if (!bmp.performReading()) {
    Serial.println("Failed to perform reading :(");
    return "Bad Sensor Reading";
  }
  Serial.print("Temperature = ");
  Serial.print(bmp.temperature);
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(bmp.pressure / 100.0);
  Serial.println(" hPa");

  Serial.print("Approx. Altitude = ");
  Serial.print(bmp.readAltitude(SEALEVELPRESSURE_HPA));
  Serial.println(" m");

  Serial.println();

  float ox = orientationData.orientation.x;
  float oy = orientationData.orientation.y;
  float oz = orientationData.orientation.z; 
  float ax = accelerometerData.acceleration.x;
  float ay = accelerometerData.acceleration.y;
  float az = accelerometerData.acceleration.z;
  float temp = bmp.temperature; 
  float pressure = bmp.pressure
  float altitude = bmp.readAltitude(SEALEVELPRESSURE_HPA); 

  data = String(millis()) + "," + String(ox) + "," + String(oy) + "," + String(oz) +"," + String(ax) + "," + String(ay) + "," + String(az) + "," + String(temp) + "," + String(pressure) +"," + String(altitude);
  return data; 
}
void createLogFile() {

  if (!SD.exists("sensorData.csv")) {
    File file = SD.open("sensorData.csv", FILE_WRITE);
    if (file) {
      file.println("time(ms),ox,oy,oz,ax,ay,az,temp,pressure,altitude");
      file.close();
    }
  }
}
void writeSD(String data) {
  File file = SD.open("sensorData.csv", FILE_WRITE);

  if (file) {
    file.println(data);
    file.close();

    Serial.println("Written to SD");
  } 
  else {
    Serial.println("Failed to open file");
  }
}