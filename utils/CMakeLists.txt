add_library(utils
    utils.cpp
    utils.h
    tree_utils.cpp
    tree_utils.h
)

target_include_directories(utils
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
