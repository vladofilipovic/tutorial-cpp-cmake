#include <iostream>

#include <fmt/core.h>

#include <oper/MultiplyClass.hpp> 
#include <oper/AddClass.hpp>


int main(int argc, const char* argv[]) {
    int arg1 = 5;
    int arg2 = 6;
    MultiplyClass mu{};
    AddClass adder{};
    int answer = mu.doit(arg1,arg2);
    fmt::print("OPERATION-5\n");
    std::cout << "Multiplication: " << answer << std::endl;
    std::cout << "Addition: " << adder.doit(arg1, arg2) << std::endl;
    return 0;
}