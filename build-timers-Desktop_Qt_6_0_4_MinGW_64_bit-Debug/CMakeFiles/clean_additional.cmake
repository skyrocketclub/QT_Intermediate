# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\timers_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\timers_autogen.dir\\ParseCache.txt"
  "timers_autogen"
  )
endif()
