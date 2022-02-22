# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QTemp_FIle_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QTemp_FIle_autogen.dir\\ParseCache.txt"
  "QTemp_FIle_autogen"
  )
endif()
