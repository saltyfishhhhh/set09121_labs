<<<<<<< HEAD:practical_1/CMakeLists.txt
cmake_minimum_required(version 3.9)
# require modern c++

=======
cmake_minimum_required(version 3.10.2)
>>>>>>> cd2b3d53f0625b3460369602bc1f079626a97044:practical_1/CmakeLists.txt
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Games_Engineering)

#### setup Directories
##main output directory
SET(OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")
## output all DLLs from all libs into main build folder
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})
## add external dependencies ###

add_subdirectory("lib/sfml")
set(SFML_INCS "lib/sfml/include")
link_directories("${CMKAE_BINARY_DIR}/lib/sfml/lib")

<<<<<<< HEAD:practical_1/CMakeLists.txt

#### practical 1 ###
=======
####praactical 1 ##

>>>>>>> cd2b3d53f0625b3460369602bc1f079626a97044:practical_1/CmakeLists.txt
file(GLOB_RECURSE SOURCES practical_1/*.cpp practical_1/*.h)
add_executable(PRACTICAL_1 ${SOURCES})
target_include_directories(PRACTICAL_1 PRIVATE ${SFML_INCS})
target_link_libraries(PRACTICAL_1 sfml - graphics)
