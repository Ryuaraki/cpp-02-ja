#include <iostream>
#include <string>
#include "logger.hpp"


Logger::Logger() {}

void Logger::logMessage(const std::string& msg) const {
    std::cout << msg << std::endl;
}