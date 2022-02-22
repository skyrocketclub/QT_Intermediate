# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Navigate_Dir_recursively_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Navigate_Dir_recursively_autogen.dir\\ParseCache.txt"
  "Navigate_Dir_recursively_autogen"
  )
endif()
