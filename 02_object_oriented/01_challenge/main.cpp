#include <iostream>
#include "car.hpp"


int main () {
    Car car("Toyota", "Noa", 2022, 30'000);
    car.displayInfo();

    car.setPrice(35'000);

    return 0;
}