#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector size stack variable for copies")
{
	Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
	
}

TEST_CASE("Test vector heap variables for copies")
{
	/*Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1[1] == v2[1]);
	v1[1] = 5;
	REQUIRE(v1[1] != v2[1]);*/
}

TEST_CASE("Test vector copy assignment from existing instances")
{
	Vector v1(3);
	Vector v2(3);
	v1[0] = 1;
	REQUIRE(v1[0] != v2[0]);
	v2 = v1;
	
	REQUIRE(v1[0] == v2[0]);
	v1[0] = 5;
	REQUIRE(v1[0] != v2[0]);
}

/*TEST_CASE("Function value, reference, pointer, pointer constant")
{
	int n1 =1, n2 = 3, n3 =3, n4 =4;

	val_ref_ptr_cptr(n1, n2, &n3, &n4);

	REQUIRE(n1 == 1);




	
	REQUIRE(n2 == 5);
	REQUIRE(n3 == 10);
	REQUIRE(n4 == 4);
}*/

