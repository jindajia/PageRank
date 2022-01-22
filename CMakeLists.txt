cmake_minimum_required(VERSION 3.0.0)
project(Venom VERSION 0.1.0)
set (CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(Venom ${PROJECT_SOURCE_DIR}/src/main.cpp ${PROJECT_SOURCE_DIR}/src/mylib.cpp ${PROJECT_SOURCE_DIR}/src/config.cpp)

find_package(Boost REQUIRED filesystem date_time serialization)


#cmake build Path
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/library)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
#cmake build Path

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
target_link_libraries(Venom Boost::filesystem Boost::date_time Boost::serialization)
