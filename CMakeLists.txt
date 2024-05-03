cmake_minimum_required(VERSION 3.28)

project(find_number)

add_executable
(
	find_number.cpp
	find_number.h
	game_prepare.cpp
	game_prepare.h
	game_ui.cpp
	game_ui.h
	game_logic.cpp
	game_logic.h
	game_log.cpp
	game_log.h
)


set_target_properties(find_number PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)


