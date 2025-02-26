#include <string>
#include <iostream>
#include <fstream>

int main(int argc, std::string *argv)
{
	if (argc != 4)
	{
		std::cerr << "invalid arguments!" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "can not open the input file!" << std::endl;
		return 1;
	}
	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "can not open the output file!" << std::endl;
		return 1;
	}
	std::string line;
	while(std::getline(inputFile, line))
	{
		
	}
}