
message("Processing /src/oper ...")

find_package(fmt CONFIG REQUIRED)

set(INCLUDE_OPER 
    ${PROJECT_DIR}/src/oper/MultiplyClass.hpp
    ${PROJECT_DIR}/src/oper/AddClass.hpp
)

set(SOURCE_OPER 
    ${PROJECT_DIR}/src/oper/MultiplyClass.cpp 
    ${PROJECT_DIR}/src/oper/AddClass.cpp
)

add_library(oper 
STATIC 
    ${INCLUDE_OPER} 
    ${SOURCE_OPER} 
)

target_include_directories(oper 
PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(oper 
PRIVATE 
    fmt::fmt 
)

