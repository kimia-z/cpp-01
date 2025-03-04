#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "invalid arguments!" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream input(filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "can not open the input file!" << std::endl;
		return 1;
	}
	std::ofstream output((filename + ".replace").c_str());
	if (!output.is_open())
	{
		std::cerr << "can not open the output file!" << std::endl;
		return 1;
	}
	std::string line;
	while(std::getline(input, line))
	{
		size_t	pos = 0;
		size_t	prev_pos = 0;
		std::string	add_line;
		while (true)
		{
			pos = line.find(s1, prev_pos);
			if (pos == std::string::npos)
				break;
			add_line += line.substr(prev_pos, pos - prev_pos);
			add_line += s2;
			prev_pos = pos + s1.length();
		}
		add_line += line.substr(prev_pos);
		output << add_line << std::endl;
	}
	input.close();
	output.close();
	return 0;
}