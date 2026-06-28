cmake_minimum_required(VERSION 3.14)

project(depa LANGUAGES CXX)

# Get the parent directory (TOP folder)
get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)

if(NOT TARGET libf)
    add_subdirectory(${PARENT_DIR}/libf ${CMAKE_BINARY_DIR}/libf)
endif()

add_library(liba SHARED liba.cpp)

# Include directories
target_include_directories(liba PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../libf
)

# Link to depf (assuming depf is defined in a parent CMakeLists.txt)
target_link_libraries(liba PRIVATE libf)


