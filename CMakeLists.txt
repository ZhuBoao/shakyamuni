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

include_directories(${PROJECT_SOURCE_DIR})

set(SOURCE_FILES main.cpp shakyamuni/PreProcess/PreProcess.h shakyamuni/Types/types.h shakyamuni/Controller.h shakyamuni/PreProcess/SimpleBinaryPreProcess.h shakyamuni/Controller.cpp shakyamuni/PreProcess/SimpleBinaryPreProcess.cpp shakyamuni/PreProcess/PreProcess.cpp shakyamuni/FeatureExtract/FeatureExtract.cpp shakyamuni/FeatureExtract/FeatureExtract.h shakyamuni/CharacterRepresent/CharacterRepresent.cpp shakyamuni/CharacterRepresent/CharacterRepresent.h shakyamuni/FeatureExtract/SimpleFeatureExtract.cpp shakyamuni/FeatureExtract/SimpleFeatureExtract.h shakyamuni/CharacterRepresent/SingleCharacterRepresent.cpp shakyamuni/CharacterRepresent/SingleCharacterRepresent.h shakyamuni/Helpers/Exception.cpp shakyamuni/Helpers/Exception.h shakyamuni/CharacterRepresent/ComplexCharacterRepresent.cpp shakyamuni/CharacterRepresent/ComplexCharacterRepresent.h shakyamuni/PreProcess/FaceDetectBasePreProcess.cpp shakyamuni/PreProcess/FaceDetectBasePreProcess.h)

add_executable(shakyamuni ${SOURCE_FILES})

# Link your application with OpenCV libraries
target_link_libraries(shakyamuni ${OpenCV_LIBS})
