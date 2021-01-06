PROJECT(0350IntersectionOfTwoArraysII)

file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp *.cxx *.h *.hpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)
