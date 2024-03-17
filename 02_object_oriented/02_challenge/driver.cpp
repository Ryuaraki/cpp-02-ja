#include <iostream>
#include <string>
#include "driver.hpp"


Driver::Driver(std::string name, int age) : name(name), age(age) {
    if(age < 0) {
        std::cerr << "Age is negative value!!" << std::endl;
    }
}

std::string Driver::get_name() const { return name; }
int Driver::get_age() const { return age; }