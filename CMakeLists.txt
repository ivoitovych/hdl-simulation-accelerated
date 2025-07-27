set(HDL_SIMULATION_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/examples/minimal_divider/tt_metal/minimal_divider.cpp
)

CREATE_PGM_EXAMPLES_EXE("${HDL_SIMULATION_SRCS}" "hdl_simulation_accelerated")

add_custom_target(hdl_simulation_accelerated_examples DEPENDS ${PROGRAMMING_EXAMPLES_TEST_TARGETS})
