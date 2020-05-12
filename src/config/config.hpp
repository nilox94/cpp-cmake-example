#pragma once

#include <string>
#include <vector>

struct Config {
	std::string name;
	int value;
	std::vector<int> items;

	bool operator==(const Config & other) const;

	void save(const std::string &filename);

	void load(const std::string &filename);
};
