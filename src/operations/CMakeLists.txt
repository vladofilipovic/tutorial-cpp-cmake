
message("Processing /src/operations ...")


find_package(fmt CONFIG REQUIRED)

set(INCLUDE_OPERATIONS 
    
)

set(SOURCE_OPERATIONS 
    ${PROJECT_DIR}/src/operations/Operations.cpp 
)

add_executable(operations 
    ${INCLUDE_OPERATIONS}
    ${SOURCE_OPERATIONS}
)

target_include_directories(operations 
PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}
)

include_directories(../)

target_link_libraries(operations 
PRIVATE 
    fmt::fmt 
    oper
)


