set(TEST_SOURCES
    test_config_parser.cpp
)

add_executable(unit-tests ${TEST_SOURCES})

target_include_directories(unit-tests
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/src
)

add_test(NAME unit-tests COMMAND unit-tests)
