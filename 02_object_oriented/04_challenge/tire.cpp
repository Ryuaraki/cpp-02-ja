#include "tire.hpp"
#include <iostream>

Tire::Tire(float size, std::string type) : size(19.0), type("Nomal") {
    if(size <= 0.0) {
        std::cerr << "Size is Negative Value!!" << std::endl;
    }
    std::cout << size << " inch " << type << " tire created!! " << std::endl;
}

float Tire::getSize() const {
    return size;
}

std::string Tire::getType() const {
    return type;
}