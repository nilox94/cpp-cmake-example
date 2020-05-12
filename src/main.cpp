#include <string>
#include <iostream>
#include "config/config.hpp"

using namespace std;


int main()
{
	string filename = "config.json";
	Config f
	{
		.name = "hello world!",
		.value = 42,
		.items = {1,2,3}
	};
	f.save(filename);
	cout << "config saved in `" << filename << "`" << endl;
	return 0;
}
