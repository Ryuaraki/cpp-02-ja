#pragma once

#include <iostream>
#include <string>
#include "car.hpp"

class Driver {
public:
    Driver(std::string name, int age);
    std::string get_name() const;
    int get_age() const;

private:
    std::string name;
    int age;
};