#include <iostream>
#include "car.hpp"
#include "garage.hpp"


int main () {
    Car car1("Toyota", "Camry", 2020, 25'000);
    Car car2("Honda", "Civic", 2021, 23'000);
    Car car3("Ford", "Mustang", 2019, 28'000);

    Garage garage;
    garage.addCar(&car1);
    garage.addCar(&car2);
    garage.addCar(&car3);

    std::cout << "Number of cars in garage: " << garage.getNumCars() << std::endl;

    std::cout << "Removed a car" << std::endl;
    garage.removeCar(&car2);
    std::cout << "Number of cars in garage: " << garage.getNumCars() << std::endl;

    return 0;
}