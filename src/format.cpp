#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
std::string Format::ElapsedTime(long seconds) { 
     
    long lseconds = seconds % 60;
    long lminutes = (seconds / 60) % 60;
    long lhours   = seconds /3600; 

    std::stringstream result;

    result << std::setfill('0') << std::setw(2) << lhours << ":";
    result << std::setfill('0') << std::setw(2) << lminutes << ":";  
    result << std::setfill('0') << std::setw(2) << lseconds; 

    return result.str();
}