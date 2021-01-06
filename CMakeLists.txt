cmake_minimum_required(VERSION 3.0.0)
project(LeetCode VERSION 0.1.0)

# get all subdirectories in the curdir
macro(SUBDIRLIST result curdir)
    file(GLOB children RELATIVE ${curdir} ${curdir}/*)
    set(dirlist "")
    foreach(child ${children})
        if(IS_DIRECTORY ${curdir}/${child})
            if((NOT (${child} MATCHES Catch2))
                AND (NOT (${child} MATCHES .vscode))
                AND (NOT (${child} MATCHES .git))
                AND (NOT (${child} MATCHES .build)))
                LIST(APPEND dirlist ${curdir}/${child})
            ENDIF()
        endif()
    endforeach()
    set(${result} ${dirlist})
endmacro()

# get all files in the directory
macro(GETFILELIST result curdir)
    file(GLOB children RELATIVE ${curdir} ${curdir}/*)
    set(filelist "")
    foreach(child ${children})
        if(NOT (IS_DIRECTORY ${curdir}/${child}))
            LIST(APPEND filelist ${child})
        endif()
    endforeach()
    set(${result} ${filelist})
endmacro()

# get all subdirectories
SUBDIRLIST(subdirs ${CMAKE_CURRENT_SOURCE_DIR})

# add_subdirectory if the subdirectory contains `CMakeLists.txt`
foreach(subdir ${subdirs})
    GETFILELIST(files ${subdir})
    LIST(FIND files "CMakeLists.txt" RET)
    if (NOT (${RET} EQUAL -1))
        ADD_SUBDIRECTORY(${subdir})
    endif ()
endforeach()

# add Catch2 project
add_subdirectory(${CMAKE_SOURCE_DIR}/Catch2)
