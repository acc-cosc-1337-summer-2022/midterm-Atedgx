#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"
#include <cstdlib>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
};

TEST_CASE("Test commission for 100 is 5"){

	REQUIRE(get_sales_commission(100.0) == 5.0);
};

TEST_CASE("Test commission for 750 is 45"){

	REQUIRE(get_sales_commission(750.0) == 45.0);
};

TEST_CASE("Test commission for 1100 is 77"){

	REQUIRE(abs(get_sales_commission(1100.0)) == abs(77.0));
};

TEST_CASE("Test commission for 1750 is 140"){

	REQUIRE(get_sales_commission(1750.0) == 140.0);
};