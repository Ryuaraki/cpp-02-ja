#include "car.hpp"

#include <iostream>
#include <string>
#include <iomanip>

Car::Car(std::string make, std::string model, int year, double price)
    : make(make), model(model), year(year), price(price) {
    if (price < 0) {
        std::cerr << "Negative Car Price!" << "\n";
    }
}

void Car::setPrice(double price) {
    // printPriceChange(this->price, price);
    std::stringstream s1, s2;
    s1 << std::fixed << std::setprecision(1) << this->price;
    s2 << std::fixed << std::setprecision(1) << price;
    // logger.logMessage("Changing price from " + std::to_string(this->price) + " to " + std::to_string(price));
    logger.logMessage("Changing price from $" + s1.str() + " to $" + s2.str());
    this->price = price;
}

std::string Car::getMake() const { return make; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

void Car::displayInfo() const {
    std::cout << year << " " << make << " " << model << " - $" << price << "\n";
}

/* void Car::printPriceChange(double from, double to) const {
    std::cout << "Changing price from " << from << " to " << to << "\n";
} */
