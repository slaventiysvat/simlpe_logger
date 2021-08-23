#include <iostream>
#include <string>
#include <memory>
#include "thermcolor.h"
using namespace std;

int main()
{

	// test foreground colors
	std::cout << termcolor::grey << "grey message" << termcolor::reset << std::endl;
	std::cout << termcolor::red << "red message" << termcolor::reset << std::endl;
	std::cout << termcolor::green << "green message" << termcolor::reset << std::endl;
	std::cout << termcolor::yellow << "yellow message" << termcolor::reset << std::endl;
	std::cout << termcolor::blue << "blue message" << termcolor::reset << std::endl;
	std::cout << termcolor::magenta << "magenta message" << termcolor::reset << std::endl;
	std::cout << termcolor::cyan << "cyan message" << termcolor::reset << std::endl;
	std::cout << termcolor::white << "white message" << termcolor::reset << std::endl;
	std::cout << "default message" << std::endl;
	std::cout << std::endl;

	//char time_format[] = "%A, %B %d, %Y %I:%M:%S";
	//std::string buffer = time_log(time_format);
	//cout << "Current Datetime: " << buffer << endl;
	cin.get();
	return 0;
}
