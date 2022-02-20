# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Reading_files_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Reading_files_autogen.dir\\ParseCache.txt"
  "Reading_files_autogen"
  )
endif()
