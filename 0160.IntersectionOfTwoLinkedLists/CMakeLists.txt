# 设置项目名称
project(0160.IntersectionOfTwoLinkedLists)

# 添加可执行文件
add_executable(${PROJECT_NAME}
    TEST.cpp
    0160.IntersectionOfTwoLinkedLists.h
)

# 链接 Catch2
target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)

# 添加测试
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
