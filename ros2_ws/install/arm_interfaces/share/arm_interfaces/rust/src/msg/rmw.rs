#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__msg__ArmControl() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__msg__ArmControl__init(msg: *mut ArmControl) -> bool;
    fn arm_interfaces__msg__ArmControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmControl>, size: usize) -> bool;
    fn arm_interfaces__msg__ArmControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmControl>);
    fn arm_interfaces__msg__ArmControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmControl>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmControl>) -> bool;
}

// Corresponds to arm_interfaces__msg__ArmControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__msg__ArmControl__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__msg__ArmControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__msg__ArmControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__msg__ArmControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__msg__ArmControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmControl where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/msg/ArmControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__msg__ArmControl() }
  }
}


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__msg__Telemetry() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__msg__Telemetry__init(msg: *mut Telemetry) -> bool;
    fn arm_interfaces__msg__Telemetry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Telemetry>, size: usize) -> bool;
    fn arm_interfaces__msg__Telemetry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Telemetry>);
    fn arm_interfaces__msg__Telemetry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Telemetry>, out_seq: *mut rosidl_runtime_rs::Sequence<Telemetry>) -> bool;
}

// Corresponds to arm_interfaces__msg__Telemetry
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub accelerometer: geometry_msgs::msg::rmw::Vector3,

}



impl Default for Telemetry {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__msg__Telemetry__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__msg__Telemetry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Telemetry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__msg__Telemetry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__msg__Telemetry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__msg__Telemetry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Telemetry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Telemetry where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/msg/Telemetry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__msg__Telemetry() }
  }
}


