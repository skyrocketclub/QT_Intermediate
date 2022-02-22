# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lock_file_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lock_file_autogen.dir\\ParseCache.txt"
  "Lock_file_autogen"
  )
endif()
