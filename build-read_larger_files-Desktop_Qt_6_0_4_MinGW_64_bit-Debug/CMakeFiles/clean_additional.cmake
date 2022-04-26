# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\read_larger_files_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\read_larger_files_autogen.dir\\ParseCache.txt"
  "read_larger_files_autogen"
  )
endif()
