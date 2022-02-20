# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QTextStream_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QTextStream_autogen.dir\\ParseCache.txt"
  "QTextStream_autogen"
  )
endif()
