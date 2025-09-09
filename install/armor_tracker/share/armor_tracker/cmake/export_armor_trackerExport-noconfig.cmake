#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "armor_tracker::armor_tracker" for configuration ""
set_property(TARGET armor_tracker::armor_tracker APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(armor_tracker::armor_tracker PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libarmor_tracker.so"
  IMPORTED_SONAME_NOCONFIG "libarmor_tracker.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS armor_tracker::armor_tracker )
list(APPEND _IMPORT_CHECK_FILES_FOR_armor_tracker::armor_tracker "${_IMPORT_PREFIX}/lib/libarmor_tracker.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
