#include <checker.hpp>
#include "../../src/oper/MultiplyClass.hpp"

int main() {
	MultiplyClass mu{};
	CHECK(mu.doit(32, 3), 96)
		test_result();

}