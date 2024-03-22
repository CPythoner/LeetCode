import os
import sys


def convert_to_camel_case(s: str) -> str:
    parts = s.split()
    return parts[0].lower() + "".join(word.capitalize() for word in parts[1:])


def format_dir_name_keep_dot(title: str) -> str:
    # 直接分割字符串，保留“.”
    parts = title.split()
    # 检查并补足第一个部分（数字）至4位，考虑保留点（如果存在）
    if parts[0].isdigit():
        parts[0] = parts[0].zfill(4)
    elif parts[0][-1] == "." and parts[0][:-1].isdigit():
        parts[0] = parts[0][:-1].zfill(4) + "."
    # 将第一个部分保持原样，其余部分首字母大写
    dir_name = parts[0] + "".join(word.capitalize() for word in parts[1:])
    return dir_name


def create_leetcode_directory_and_files(title: str):
    # Process the title to generate the directory name
    dir_name = format_dir_name_keep_dot(title)

    # Create the directory
    os.makedirs(dir_name, exist_ok=True)

    # Create the header file with "#pragma once"
    header_file_name = f"{dir_name}.h"
    header_file_path = os.path.join(dir_name, header_file_name)
    with open(header_file_path, "w") as header_file:
        header_file.write(
            "#pragma once\n\n/*\n\n*/\n\nclass Solution\n{\npublic:\n\n};"
        )

    # Create the TEST.cpp file
    test_file_name = "TEST.cpp"
    test_file_path = os.path.join(dir_name, test_file_name)
    test_name = dir_name.split(".", 1)[-1]  # Remove the leading number and dot
    with open(test_file_path, "w") as test_file:
        test_file.write(
            f"""#include "{header_file_name}"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("{test_name}", "[{convert_to_camel_case(test_name)}]")
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
