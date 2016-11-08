#Variable set
set (PROJECT_SOURCE_DIR ./src)  #Source path
set (PROJECT_INCLUDE_DIR ./inc) #Include path
set (PROJECT_ARCHIVE_DIR ./lib)	#Archive lib output path

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_ARCHIVE_DIR} ) #CMake lib output path 

set (LIBRARY_SRC ${PROJECT_SOURCE_DIR}/libtest1.c
				${PROJECT_SOURCE_DIR}/libtest1_1.c)

MESSAGE(STATUS "libtest1 LIB_SRC: " ${LIBRARY_SRC})

add_library(libtest1 STATIC ${LIBRARY_SRC})

# include search path 
target_include_directories(libtest1 PUBLIC ${PROJECT_INCLUDE_DIR})
