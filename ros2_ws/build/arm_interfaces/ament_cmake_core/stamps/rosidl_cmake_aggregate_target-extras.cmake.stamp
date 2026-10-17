# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target arm_interfaces::arm_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${arm_interfaces_TARGETS}.
if(arm_interfaces_TARGETS AND NOT TARGET arm_interfaces::arm_interfaces)
  add_library(arm_interfaces::arm_interfaces INTERFACE IMPORTED)
  set_target_properties(arm_interfaces::arm_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${arm_interfaces_TARGETS}")
endif()
