cmake_minimum_required(VERSION 3.13)
project(TDEchecs)

set(CMAKE_CXX_STANDARD 14)

add_executable(TDEchecs TDEchecs.cpp Piece.cpp Piece.h Board.cpp Board.h King.cpp King.h Knight.cpp Knight.h Rook.cpp Rook.h Bishop.cpp Bishop.h)