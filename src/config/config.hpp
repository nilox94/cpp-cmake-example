#include <string>
#include <vector>

#if !defined(__CONFIG_HPP__)
#define __CONFIG_HPP__

struct Config {
	std::string name;
	int value;
	std::vector<int> items;

	bool operator==(Config &other);

	void save(const std::string &filename);

	void load(const std::string &filename);
};

#endif // __CONFIG_HPP__
