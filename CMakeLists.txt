cmake_minimum_required(VERSION 3.21)

project(helloExtension)

add_library(helloExtension SHARED extension.cpp hello.cpp)

target_include_directories(helloExtension
                           PUBLIC "./include"
                          )
target_link_directories(helloExtension
                        PUBLIC "./lib"
                       )
target_link_libraries(helloExtension python38.dll)

