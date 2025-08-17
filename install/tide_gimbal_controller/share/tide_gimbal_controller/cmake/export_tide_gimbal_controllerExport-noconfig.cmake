#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tide_gimbal_controller::tide_gimbal_controller" for configuration ""
set_property(TARGET tide_gimbal_controller::tide_gimbal_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tide_gimbal_controller::tide_gimbal_controller PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtide_gimbal_controller.so"
  IMPORTED_SONAME_NOCONFIG "libtide_gimbal_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tide_gimbal_controller::tide_gimbal_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_tide_gimbal_controller::tide_gimbal_controller "${_IMPORT_PREFIX}/lib/libtide_gimbal_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
