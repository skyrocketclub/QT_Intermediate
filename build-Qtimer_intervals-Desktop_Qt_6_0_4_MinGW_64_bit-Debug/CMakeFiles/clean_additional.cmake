# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qtimer_intervals_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qtimer_intervals_autogen.dir\\ParseCache.txt"
  "Qtimer_intervals_autogen"
  )
endif()
