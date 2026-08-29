# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

# Allow custom TankAlert board definitions in boards/
list(APPEND BOARD_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/boards)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(tankalert)

target_sources(app PRIVATE
	src/main.c
)

zephyr_include_directories(include)
