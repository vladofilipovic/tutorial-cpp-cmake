
add_executable(test_multiply 
    ${PROJECT_DIR}/tests/ctest/test_multiply/main.cpp
    ${TEST_SOURCES}
    ${TEST_HEADERS}
)
target_include_directories(test_multiply 
PUBLIC 
    ${TEST_INCLUDE_DIRS}
)

target_link_libraries(test_multiply 
    uo
)

add_test(test_multiply, test_multiply)