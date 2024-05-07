
message("Processing /tests/boost ...")

add_definitions(-DBOOST_ALL_NO_LIB)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost 
REQUIRED 
COMPONENTS 
    system 
    filesystem 
    unit_test_framework
)

include_directories (${Boost_INCLUDE_DIRS})

add_executable(testb  
    main.cpp
    example_add.cpp
    example_subtract.cpp
)

target_link_libraries (testb ${Boost_LIBRARIES})

target_link_libraries(testb 
    Boost::unit_test_framework
    Boost::system
    Boost::filesystem
)

add_test(testb testb)