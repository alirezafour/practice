cmake_minimum_required(VERSION 3.5)
project(ObserverWithBoostUsage)

set(SOURCE_FILES main.cpp person.cpp)

include_directories(/usr/local/include/boost)
add_executable(ObserverWithBoostSample ${SOURCE_FILES})
