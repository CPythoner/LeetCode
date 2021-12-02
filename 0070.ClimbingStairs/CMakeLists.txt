# get name of this directory
STRING(REGEX REPLACE ".*/(.*)" "\\1" CURRENT_FOLDER ${CMAKE_CURRENT_SOURCE_DIR})

PROJECT(${CURRENT_FOLDER})

MESSAGE(STATUS "Config >> " ${PROJECT_NAME})
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp *.cxx *.h *.hpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)
