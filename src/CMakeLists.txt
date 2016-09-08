#
# Created by Raoul Rubien on 08.09.16.
#

add_subdirectory(compiler)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(foo
        foo.c
        Foo.cpp
)
