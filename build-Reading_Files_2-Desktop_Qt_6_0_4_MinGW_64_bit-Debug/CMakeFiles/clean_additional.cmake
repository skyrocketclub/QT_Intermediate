# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Reading_Files_2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Reading_Files_2_autogen.dir\\ParseCache.txt"
  "Reading_Files_2_autogen"
  )
endif()
