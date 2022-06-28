#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
};

TEST_CASE("Verify area 1"){
class Rectangle new_r;
REQUIRE(new_r.get_area(5,5) == 25);

}

TEST_CASE("Verify area 2"){
class Rectangle new_r1;
REQUIRE(new_r1.get_area(3,10) == 30);

}

TEST_CASE("Verify area 3"){
class Rectangle new_r2;
REQUIRE(new_r2.get_area(10,10) == 100);

}