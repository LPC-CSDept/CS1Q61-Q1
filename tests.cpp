// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "q1.hpp"

// tests for exercise 1
TEST_CASE("Test1 ", "[Swap two values]")
{
	int n1, n2;
	n1 = 10;
	n2 = 20;
	swap(n1, n2);
	REQUIRE(n1 == 20);
	REQUIRE(n2 == 10);
}
TEST_CASE("Test2 ", "[Swap two values]")
{
	float n1, n2;
	n1 = 12.34;
	n2 = 45.67;
	swap(n1, n2);
	REQUIRE(n1 == (float)45.67);
	REQUIRE(n2 == (float)12.34);
}