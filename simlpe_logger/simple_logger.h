#ifndef SIMPLE_LOGGER
#define SIMPLE_LOGGER
#include <string>
#include <memory>
//All info about time was took here
//https ://cppstudy.wordpress.com/2009/03/14/current-date-time/

namespace error_type {
    enum Code {
        info,
        debug,
        warning,
        error,
        INFO,
        DEBUG,
        WARNING,
        ERROR
    };
}

class logger {


    private:
    std::string char_to_string(char* char_arr);
    std::unique_ptr<char> string_to_char_array(std::string string_arr);
    std::string time_log(char* time_format);
    //My Template "Saturday, August 14, 2021 05:07:33"
    std::string time_log_format_def = "%A, %B %d, %Y %I:%M:%S"; 
    //Customer 1
    //Example of messages: 23/Feb/2021, 14:23:38; Info; Main(1256): This is my log message
    std::string time_log_format_1 = "%d/%b/%Y, %I:%M:%S";
    //Customer 2 
    //Example of messages: 23.02.2021 18:02:02; INFO; MyFunc(5628): Test message
    std::string time_log_format_2 = "%d.%b.%Y, %I:%M:%S";
    std::string current_string_format;
    public:
        logger() {}
        logger(std::string time_format, error_type::Code error_id) {}
        ~logger() {}
       
   
};


#endif /*SIMPLE_LOGGER*/
