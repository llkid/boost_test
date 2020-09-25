cmake_minimum_required(VERSION 3.16)
project(boost_test VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)
set(Boost_USE_RELEASE_LIBS ON)
#set(Boost_USE_STATIC_LIBS OFF) # use .a or .so file
set(Boost_USE_MULTITHREAD ON)

find_package(Boost REQUIRED COMPONENTS serialization date_time system filesystem thread timer)
include_directories(${Boost_INCLUDE_DIRS})
include_directories(/usr/include)
include_directories(/usr/include/mysql)
include_directories(/usr/include/mysql++)
link_directories(${Boost_LIBRARY_DIRS})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries (${PROJECT_NAME} "boost_regex" "mysqlpp")
