#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(23231411)) == nospaces("  ___  \n ..... \n (o_O) \n<( : ) \n ( : ) "));
	CHECK(nospaces(snowman(23111433)) == nospaces("  ___  \n ..... \n (.,.) \n<(> <) \n (___) "));
	CHECK(nospaces(snowman(42141234)) == nospaces("  _  \n  /_\\ \n (..o)/\n</( : ) \n (___) "));
	CHECK(nospaces(snowman(42141234)) == nospaces("  _  \n  /_\\ \n (..o)/\n</( : ) \n (___) "));

	// check if make all the space right
    CHECK(snowman(11114411) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK(snowman(23231411) == "  ___  \n ..... \n (o_O) \n<( : ) \n ( : ) ");
	CHECK(snowman(23111433) == "  ___  \n ..... \n (.,.) \n<(> <) \n (___) ");
    
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(111));
	CHECK_THROWS(snowman(3242));
	CHECK_THROWS(snowman(32145));
	CHECK_THROWS(snowman(12));
	CHECK_THROWS(snowman(1113435));
	CHECK_THROWS(snowman(323221));
	CHECK_THROWS(snowman(2));
	//test if work with more than 8 letters 
    CHECK_THROWS(snowman(333333333));
    CHECK_THROWS(snowman(444444444));
    // test if work with number not in range 1-4
    CHECK_THROWS(snowman(13404243));
    CHECK_THROWS(snowman(99999999));
    // test if 
}
    TEST_CASE("output general test") {
    //test consistency of the def
    CHECK(snowman(12341234)==snowman(12341234));
    CHECK(snowman(12341234)!=snowman(13341234));
	//test positive number
	CHECK_THROWS(snowman(99999999));
	//test zero
	CHECK_THROWS(snowman(0));
	CHECK_THROWS(snowman(00000000));
	
	}