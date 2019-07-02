cmake_minimum_required(VERSION 3.5.1)

include_directories(include)
project(FIVE_STONE)


add_executable(${PROJECT_NAME}.out
  src/five_stones/main.cpp
  src/five_stones/stone.cpp
  )
