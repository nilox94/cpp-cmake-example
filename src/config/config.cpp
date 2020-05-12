#include "config.hpp"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>
#include <fstream>

using json = nlohmann::json;

bool Config::operator==(Config &other)
{
  return name == other.name 
      && value == other.value
      && items == other.items;
}

void Config::save(const std::string &filename)
{
		json j;
		j["name"] = name;
		j["value"] = value;
		j["items"] = items;

		std::fstream fs;
		fs.open(filename, std::fstream::in | std::fstream::out | std::fstream::trunc);
		fs << j;
		fs.close();
}

void Config::load(const std::string &filename)
{
		std::fstream fs;
		json j;
		fs.open("config.json", std::fstream::in);
		fs >> j;
		name = j["name"];
		value = j["value"];
		items = j["items"].get<std::vector<int> >();
}
