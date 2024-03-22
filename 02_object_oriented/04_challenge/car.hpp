#pragma once
#include <string>
#include "tire.hpp"

class Tire;

class Car {
public:
    Car(std::string make, std::string model, int year, double price, float size=19.0, std::string type="Normal");

    void setPrice(double price);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;

    void displayInfo() const;

private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    int year;
    double price;
    Tire tire;
};
