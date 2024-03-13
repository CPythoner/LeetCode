import os
import sys

def create_leetcode_directory_and_files(title: str):
    # Process the title to generate the directory name
    dir_name = "".join(word.capitalize() for word in title.split())

    # Create the directory
    os.makedirs(dir_name, exist_ok=True)

    # Create the header file with "#pragma once"
    header_file_name = f"{dir_name}.h"
    header_file_path = os.path.join(dir_name, header_file_name)
    with open(header_file_path, "w") as header_file:
        header_file.write("#pragma once\n\n/*\n\n*/\n\nclass Solution\n{\npublic:\n\n};")

    # Create the TEST.cpp file
    test_file_name = "TEST.cpp"
    test_file_path = os.path.join(dir_name, test_file_name)
    test_name = dir_name.split(".", 1)[-1]  # Remove the leading number and dot
    with open(test_file_path, "w") as test_file:
        test_file.write(
            f"""#include "{header_file_name}"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("{test_name}", "[utest]")
{{
    // Solution solution;

    // Test case 1: Common case
    REQUIRE(1 + 1 == 2);
}}
"""
        )

    # Create the CMakeLists.txt file
    cmake_file_path = os.path.join(dir_name, "CMakeLists.txt")
    cmake_content = """# get name of this directory
STRING(REGEX REPLACE ".*/(.*)" "\\\\1" CURRENT_FOLDER ${CMAKE_CURRENT_SOURCE_DIR})

PROJECT(${CURRENT_FOLDER})

MESSAGE(STATUS "Config >> " ${PROJECT_NAME})
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp *.cxx *.h *.hpp)
file(GLOB UTILSSRCS
    ${CMAKE_SOURCE_DIR}/utils/*.c
    ${CMAKE_SOURCE_DIR}/utils/*.cpp
    ${CMAKE_SOURCE_DIR}/utils/*.cxx
    ${CMAKE_SOURCE_DIR}/utils/*.h
    ${CMAKE_SOURCE_DIR}/utils/*.hpp)

add_executable(${PROJECT_NAME} ${SOURCES} ${UTILSSRCS})

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)
"""
    with open(cmake_file_path, "w") as cmake_file:
        cmake_file.write(cmake_content)

    print(f"Created directory: {dir_name}")
    print(f"Created header file: {header_file_path}")
    print(f"Created TEST.cpp file: {test_file_path}")
    print(f"Created CMakeLists.txt file: {cmake_file_path}")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script.py '<leetcode_problem_title>'")
    else:
        title = sys.argv[1]
        create_leetcode_directory_and_files(title)
