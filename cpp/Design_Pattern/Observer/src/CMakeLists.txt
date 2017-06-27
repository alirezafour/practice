cmake_minimum_required(VERSION 3.5)
project(ObserverUsage)

set(SOURCE_FILES main.cpp Person.cpp ConsoleListener.cpp)

#add_library(Observer Observer.cpp Observer.h)

include_directories(/usr/local/include/boost)
add_executable(ObserverCodeSample ${SOURCE_FILES})
