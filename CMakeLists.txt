#CMakeLists
project ( HackNSlash )
cmake_minimum_required( VERSION 2.8 )
add_definitions ( -Wall )

add_executable (
  src/app/hackNSlash
  src/app/hackNSlash.cpp
  src/Model/map.cpp
  src/Model/map.h
)