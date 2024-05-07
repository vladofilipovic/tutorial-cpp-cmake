message("Processing /tests/ctest ...")

set(TEST_SOURCES 
    ${PROJECT_DIR}/src/oper/MultiplyClass.cpp 
    ${PROJECT_DIR}/src/oper/AddClass.cpp 
    ${PROJECT_DIR}/tests/ctest/checker.cpp
)

set(TEST_HEADERS 
    ${PROJECT_DIR}/src/oper/MultiplyClass.hpp 
    ${PROJECT_DIR}/src/oper/AddClass.hpp 
    ${PROJECT_DIR}/tests/ctest/checker.hpp
)

set(TEST_INCLUDE_DIRS 
    ${PROJECT_DIR}/src/oper 
    ${PROJECT_DIR}/src/uo/problem/
    ${PROJECT_DIR}/tests/ctest
)

message("Tests sources: ${TEST_SOURCES}")
message("Tests headers: ${TEST_HEADERS}")
message("Tests include dirs: ${TEST_INCLUDE_DIRS}")

add_subdirectory(test_add)
add_subdirectory(test_multiply)

include(CTest)
