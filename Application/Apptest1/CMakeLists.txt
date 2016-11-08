
#Executable version
set (APPTEST1_VERSION_MAJOR 1)
set (APPTEST1_VERSION_MINOR 0)

#Variable set
set (PROJECT_SOURCE_DIR ./src)  #Source path
set (PROJECT_INCLUDE_DIR ./inc) #Include path
set (PROJECT_BINARY_DIR ./bin)	#Binary output path

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR} ) #CMake binary output path 

MESSAGE(STATUS "PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})
MESSAGE(STATUS "PROJECT_INCLUDE_DIR: " ${PROJECT_INCLUDE_DIR})
MESSAGE(STATUS "PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})
MESSAGE(STATUS "CMAKE_RUNTIME_OUTPUT_DIRECTORY: " ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (${PROJECT_INCLUDE_DIR}/appconfig.h.in ${PROJECT_INCLUDE_DIR}/appconfig.h)

# include search path 
include_directories(${PROJECT_INCLUDE_DIR})

add_executable(apptest1 ${PROJECT_SOURCE_DIR}/apptest1.c)
target_link_libraries(apptest1 libtest1)