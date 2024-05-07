#include <checker.hpp>
#include "../../src/oper/AddClass.hpp"

int main() {
	AddClass adder{};
	CHECK(adder.doit(32, 3), 35)
		test_result();

}