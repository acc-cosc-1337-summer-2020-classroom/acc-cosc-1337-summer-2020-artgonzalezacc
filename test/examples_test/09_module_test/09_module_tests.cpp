#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Function value, reference, pointer, pointer constant")
{
	int n1 =1, n2 = 3, n3 =3, n4 =4;

	val_ref_ptr_cptr(n1, n2, &n3, &n4);

	REQUIRE(n1 == 1);




	
	REQUIRE(n2 == 5);
	REQUIRE(n3 == 10);
	REQUIRE(n4 == 4);
}

