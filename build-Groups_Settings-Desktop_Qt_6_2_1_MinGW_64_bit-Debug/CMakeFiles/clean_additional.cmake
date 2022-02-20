# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Groups_Settings_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Groups_Settings_autogen.dir\\ParseCache.txt"
  "Groups_Settings_autogen"
  )
endif()
