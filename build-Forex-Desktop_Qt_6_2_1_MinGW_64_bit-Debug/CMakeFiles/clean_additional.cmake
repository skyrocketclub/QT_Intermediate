# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Forex_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Forex_autogen.dir\\ParseCache.txt"
  "Forex_autogen"
  )
endif()
