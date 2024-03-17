#include <iostream>
#include "car.hpp"
#include "driver.hpp"


int main () {
    Car car("Toyota", "Noa", 2022, 30'000);

    Driver driver("Taro", 31);

    car.setDriver(&driver);

    Driver* carDriver = car.getDriver();
    std::cout << car.getModel() <<" driver's name: " << carDriver->get_name() << ", age: " << carDriver->get_age() << std::endl;

    return 0;
}