# Rover Arm Project — UAH Space Hardware Club, Two Month Rover Challenge 2026

A 4-degree-of-freedom robotic arm built for the UAH Space Hardware Club's **Two Month Rover Challenge 2026**, part of the ASTRA program leading toward the University Rover Challenge (URC).

## Overview

This arm mounts to the top of a provided rover chassis via a 3" square, 4x M5 bolt pattern, and is tasked with completing dexterous competition missions (keyboard typing, rock retrieval, science data collection, switches, stacking rings, etc.). Full task and scoring details are in the team's Mission Guide.

## Arm Design

- **DOF:** 4 total
  - Joint 1 — Base: oscillating (rotating) servo, sets shoulder/arm heading
  - Joint 2 — Servo + bearing
  - Joint 3 — Servo + bearing
  - Joint 4 — Servo + bearing
  - End effector: rubber gripper (passive/servo-actuated — update once finalized)

## Key Requirements (from IDD / Mission Guide)

| Requirement | Spec |
|---|---|
| Size | Arm shall not extend more than 20" past the front of the rover chassis |
| Mass | Arm shall not exceed 1.5 kg |
| Cost | Team budget (rover-related) capped at $300 |
| Power | Arm must have its own onboard power source; only connects to chassis via Ethernet |
| Connectivity | Ethernet to chassis switch; must also support tethered (direct laptop) control for testing |
| LED | Status LED(s) on the arm to indicate power/on state |
| Data | Must collect IMU, pressure, and temperature data |
| Kill switch | Visible, accessible pull-stop on the exterior of the arm; must be near the top for easy access; immediately cuts all power |
| Mounting | Bolts to chassis top plate, 3" square / 4x M5 hole pattern, into a provided captive nutplate |

## Hardware

- Microcontroller: _TBD (e.g. Arduino Mega / Uno + shield)_
- Servos: _TBD (model, quantity: 4)_
- IMU: _TBD_
- Pressure sensor: _TBD_
- Temperature sensor: _TBD_
- Ethernet module/shield: _TBD_
- microSD module (for onboard data logging): _TBD_
- Status LED(s)
- Pull-stop kill switch
- Onboard battery/power source

> Fill in exact part numbers as the electrical subteam finalizes the BOM. Keep this in sync with the team budget tracker.

## Repository Structure

```
Rover-arm-project/
├── firmware/           # Arduino .ino sketches and supporting source
│   ├── rover_arm/      # Main sketch
│   └── lib/            # Shared helper code (servo control, sensors, comms)
├── docs/               # Wiring diagrams, flowcharts, pinout tables, datasheets
├── hardware/           # CAD exports, BOM, hole patterns (mechanical/electrical reference)
└── README.md
```

## Getting Started (Software Team)

1. Install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Clone this repo:
   ```
   git clone https://github.com/haj0011/Rover-arm-project.git
   ```
3. Open the sketch under `firmware/rover_arm/` in the Arduino IDE.
4. Install any required libraries (listed at the top of the main sketch, or via **Sketch → Include Library → Manage Libraries**).
5. Select the correct board/port under **Tools**, then verify and upload.
6. For bench testing, control the arm tethered directly to a laptop before testing over Ethernet, per the Mission Guide.

## Team

- **Team Lead:** _TBD_
- **Mechanical Lead:** _TBD_
- **Electrical Lead:** _TBD_
- **Software Lead:** _TBD_
- **Mentors:** _TBD_

## Schedule (2026 Two-Month Challenge)

| Milestone | Date |
|---|---|
| Two Month Kickoff | Aug 22 |
| Team Formation | Aug 26 |
| Team Picture | Sep 5 |
| CAD Design | Sep 14 |
| PDR | Sep 25–27 |
| Team Updates | Oct 8 |
| MRR | Oct 14–17 |
| Flight Day (Mission Day) | Oct 25 |
| PFR | Nov 1 |

## Contributing

- Branch off `main` for new features (`feature/gripper-control`, `feature/imu-logging`, etc.) and open a pull request to merge back.
- Keep commits focused and use clear messages (e.g. `Add servo calibration for joint 2`).
- Document any new wiring/pinout changes in `docs/`.
