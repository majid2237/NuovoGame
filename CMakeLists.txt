cmake_minimum_required(VERSION 3.3)
project(NuovoGame)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Weapon.cpp Weapon.h Sword.cpp Sword.h Bow.cpp Bow.h Dice.cpp Dice.h GameCarachter.cpp GameCarachter.h Knight.cpp Knight.h)
add_executable(NuovoGame ${SOURCE_FILES})