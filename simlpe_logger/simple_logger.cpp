#define _CRT_SECURE_NO_WARNINGS
#include "simple_logger.h"
#include <ctime>
/*===============Function description=========================
* AUTHOR: Sviatoslav Starokozhev
* Source of info:
//https://cppstudy.wordpress.com/2009/03/14/current-date-time/
% A - full name of the day of the week
% B - full month name
% d - day of the month
% Y - 4-digit year
% H - hour in 24-hour format
% M - minutes
% S - seconds

Our string (including commas) will look like this:
char time_form_arr[] "% A,% B% d,% Y% H:% M:% S";
char* time_format = time_form_arr;

The output will be in this format
Current Datetime: Saturday, August 14, 2021 05:07:33
==============================================================
*/
std::string logger::time_log(char* time_format) {
	char buffer[80];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	char* format = time_format;
	strftime(buffer, 80, format, timeinfo);
	//converting char buffer to string
	std::string output_info = char_to_string(buffer);
	return output_info;
}
/*
 returning string instead of simple char array
*/
std::string logger::char_to_string(char* char_arr) {
	std::string out_str(char_arr);
	return out_str;
}
/*
copying string to char array
before calling of this function please allocate memory for char array and delete it after

*/
std::unique_ptr<char> logger::string_to_char_array(std::string string_arr) {

	std::unique_ptr<char> item(new char[string_arr.length() + 1]);
	/*char* char_arr = item;
	strcpy(char_arr, string_arr.c_str());*/

	return item;
}