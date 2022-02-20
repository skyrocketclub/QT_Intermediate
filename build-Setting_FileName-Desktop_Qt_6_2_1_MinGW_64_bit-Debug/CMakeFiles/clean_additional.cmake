# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Setting_FileName_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Setting_FileName_autogen.dir\\ParseCache.txt"
  "Setting_FileName_autogen"
  )
endif()
