# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QSettings_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QSettings_autogen.dir\\ParseCache.txt"
  "QSettings_autogen"
  )
endif()
