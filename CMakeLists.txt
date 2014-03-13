cmake_minimum_required(VERSION 2.6)

project(HackNSlash)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 1.6 REQUIRED system window graphics network audio)

set(LIBRARY_OUTPUT_PATH lib)

link_directories(${SFML_LIBRARY_DIRS})

include_directories(include
                    ${SFML_INCLUDE_DIRS})

#add_library(matrice SHARED src/matrice/matrice.c)
#add_library(graphe SHARED src/graphe/graphe.c)

add_executable(src/main 
               src/main.cpp)

TARGET_LINK_LIBRARIES(src/main ${SFML_LIBRARIES})
