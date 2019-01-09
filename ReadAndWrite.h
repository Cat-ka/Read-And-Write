
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

class ReadAndWrite
{
public:
	ReadAndWrite() {}
	~ReadAndWrite() {}
	void nacitajZoSuboru();
	void nacitajZKonzoly();
	void zapisDoSuboru();
	void zoradAVypis();
private:
	std::string item;
	int count = 0;
	std::vector<std::string> fruit;

};
