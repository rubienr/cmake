#
# Created by Raoul Rubien on 08.09.16.
#

set(MY_COMMAND "${CMAKE_CURRENT_BINARY_DIR}/${BINARY}")

add_custom_command(OUTPUT my_command_name
        COMMAND ${MY_COMMAND}
        DEPENDS ${BINARY}
        )
add_custom_target(my_custom_make_rule DEPENDS my_command_name)
