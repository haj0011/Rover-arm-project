#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to arm_interfaces__msg__ArmControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_0: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_1: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_3: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub claw: f64,

}



impl Default for ArmControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ArmControl::default())
  }
}

impl rosidl_runtime_rs::Message for ArmControl {
  type RmwMsg = super::msg::rmw::ArmControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        axis_0: msg.axis_0,
        axis_1: msg.axis_1,
        axis_2: msg.axis_2,
        axis_3: msg.axis_3,
        claw: msg.claw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      axis_0: msg.axis_0,
      axis_1: msg.axis_1,
      axis_2: msg.axis_2,
      axis_3: msg.axis_3,
      claw: msg.claw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      axis_0: msg.axis_0,
      axis_1: msg.axis_1,
      axis_2: msg.axis_2,
      axis_3: msg.axis_3,
      claw: msg.claw,
    }
  }
}


// Corresponds to arm_interfaces__msg__Telemetry

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Telemetry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub altitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pressure: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accelerometer: geometry_msgs::msg::Vector3,

}



impl Default for Telemetry {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Telemetry::default())
  }
}

impl rosidl_runtime_rs::Message for Telemetry {
  type RmwMsg = super::msg::rmw::Telemetry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        altitude: msg.altitude,
        temperature: msg.temperature,
        pressure: msg.pressure,
        accelerometer: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.accelerometer)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      altitude: msg.altitude,
      temperature: msg.temperature,
      pressure: msg.pressure,
        accelerometer: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.accelerometer)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      altitude: msg.altitude,
      temperature: msg.temperature,
      pressure: msg.pressure,
      accelerometer: geometry_msgs::msg::Vector3::from_rmw_message(msg.accelerometer),
    }
  }
}


