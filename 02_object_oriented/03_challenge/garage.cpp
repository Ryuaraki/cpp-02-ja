#include "garage.hpp"
#include <algorithm>

Garage::Garage() {}

void Garage::addCar(Car* car) {
    cars.push_back(car);
}

void Garage::removeCar(Car* car) {
    cars.erase(std::remove(cars.begin(), cars.end(), car)); // removeは指定した要素のイテレータを返す.
}

int Garage::getNumCars() const {
    return cars.size();
}