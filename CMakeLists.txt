cmake_minimum_required(VERSION 3.16)

# Set the project name
project(TonalityReasoner_QT)

# Set the Qt path
set(CMAKE_PREFIX_PATH "D:\\my\\QT6_x64\\lib\\cmake")

# Find the Qt package
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Find the required Qt modules
find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Add the source files
set(SOURCES
    main.cpp
    mainwindow.h
    mainwindow.cpp
    reasoner_gui.h
    reasoner_gui.cpp
)

# Define the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link the Qt libraries
target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
