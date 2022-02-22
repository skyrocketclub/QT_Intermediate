# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QData_STream_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QData_STream_autogen.dir\\ParseCache.txt"
  "QData_STream_autogen"
  )
endif()
