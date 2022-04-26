# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QIODevice_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QIODevice_autogen.dir\\ParseCache.txt"
  "QIODevice_autogen"
  )
endif()
