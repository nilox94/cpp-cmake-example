#include <catch2/catch.hpp>
#include <string>
#include <iostream>
#include "../config/config.hpp"

using namespace std;

TEST_CASE( "load and save config", "[config]" ) {
	string filename = "test-config.json";
	Config f
	{
		.name = "hello world!",
		.value = 42,
		.items = {1, 2, 3}
	};
	f.save(filename);

	Config g;
	g.load(filename);

	REQUIRE( f == g );
}
