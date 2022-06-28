#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify rolls greater than 1"){
	Dice newdice;
	REQUIRE(newdice.Roll(20) >= 1);
}

TEST_CASE("Verify rolls less than 6"){
	Dice newdice;
	REQUIRE(newdice.Roll(20) <= 6);
}