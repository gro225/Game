cmake_minimum_required(VERSION 3.6)

project(MySFMLProject)

find_package(SFML 2.6 COMPONENTS graphics audio REQUIRED)

include_directories(/opt/homebrew/Cellar/sfml/2.6.0/include)

add_executable(MySFMLApp main.cpp src/game.h src/game.cpp)

target_link_libraries(MySFMLApp sfml-system sfml-graphics sfml-audio sfml-window)
