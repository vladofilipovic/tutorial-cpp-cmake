
add_executable(test_add 
    ${PROJECT_DIR}/tests/ctest/test_add/main.cpp
    ${TEST_SOURCES}
    ${TEST_HEADERS}
)

target_include_directories(test_add 
PUBLIC 
    ${TEST_INCLUDE_DIRS}
)

target_link_libraries(test_add 
    uo
)

add_test(test_add, test_add)