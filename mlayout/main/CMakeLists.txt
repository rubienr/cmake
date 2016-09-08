#
# Created by Raoul Rubien on 08.09.16.
#

SET(BINARY "MyMain")

set(SOURCE_FILES main.cpp)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(${BINARY} ${SOURCE_FILES})

link_directories(${PROJECT_SOURCE_DIR}/src
)

target_link_libraries(${BINARY}
        foo
)
