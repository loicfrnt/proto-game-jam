# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appproto-game-jam_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appproto-game-jam_autogen.dir/ParseCache.txt"
  "appproto-game-jam_autogen"
  )
endif()