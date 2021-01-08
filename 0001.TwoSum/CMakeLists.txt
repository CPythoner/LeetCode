# get name of this directory
STRING(REGEX REPLACE ".*/(.*)" "\\1" CURRENT_FOLDER ${CMAKE_CURRENT_SOURCE_DIR})

PROJECT(${CURRENT_FOLDER})

file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp *.cxx *.h *.hpp)
file(GLOB UTILSSRCS
    ${CMAKE_SOURCE_DIR}/utils/*.c
    ${CMAKE_SOURCE_DIR}/utils/*.cpp
    ${CMAKE_SOURCE_DIR}/utils/*.cxx
    ${CMAKE_SOURCE_DIR}/utils/*.h
    ${CMAKE_SOURCE_DIR}/utils/*.hpp)

add_executable(${PROJECT_NAME} ${SOURCES} ${UTILSSRCS})

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)
