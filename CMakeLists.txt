cmake_minimum_required(VERSION 3.3)
project(Chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Board.cpp Board.h King.cpp King.h Queen.cpp Queen.h Rook.cpp Rook.h Bishop.cpp Bishop.h Knight.cpp Knight.h Pawn.cpp Pawn.h Player.cpp Player.h Player2.cpp Player2.h)
add_executable(Chess ${SOURCE_FILES})