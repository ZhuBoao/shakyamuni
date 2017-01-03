cmake_minimum_required(VERSION 3.6)
project(shakyamuni)

# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
find_package(OpenCV REQUIRED)
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

if(CMAKE_VERSION VERSION_LESS "2.8.11")
    # Add OpenCV headers location to your include paths
    include_directories(${OpenCV_INCLUDE_DIRS})
endif()

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PreProcess/PreProcess.h Types/types.h Controller.h PreProcess/BinaryPreProcess.h Controller.cpp PreProcess/BinaryPreProcess.cpp PreProcess/PreProcess.cpp FeatureExtract/FeatureExtract.cpp FeatureExtract/FeatureExtract.h CharacterRepresent/CharacterRepresent.cpp CharacterRepresent/CharacterRepresent.h FeatureExtract/SimpleFeatureExtract.cpp FeatureExtract/SimpleFeatureExtract.h CharacterRepresent/SimpleCharacterRepresent.cpp CharacterRepresent/SimpleCharacterRepresent.h)
add_executable(shakyamuni ${SOURCE_FILES})

# Link your application with OpenCV libraries
target_link_libraries(shakyamuni ${OpenCV_LIBS})
