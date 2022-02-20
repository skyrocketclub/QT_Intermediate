# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Assignment_settings_autogen"
  "CMakeFiles\\Assignment_settings_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Assignment_settings_autogen.dir\\ParseCache.txt"
  )
endif()
