#include "Harl.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Harl need argument to complain!" << std::endl;
		return 1;
	}

	Harl harl;
	std::string level = argv[1];
	int flag = 5;
	
	if (level == "DEBUG")
		flag = 0;
	else if (level == "INFO")
		flag = 1;
	else if (level == "WARNING")
		flag = 2;
	else if (level == "ERROR")
		flag = 3;
	switch (flag)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			harl.complain("UNKNOWN");
	}
	return 0;
}