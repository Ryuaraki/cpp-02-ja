#pragma once

#include <string>
#include "driver.hpp"

class Driver; // Driverクラスの前方宣言

class Car {
public:
    Car(std::string make, std::string model, int year, double price);

    void setPrice(double price);
    void setDriver(Driver* driver); // 追加

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    Driver* getDriver() const; // 追加

    void displayInfo() const;

private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    int year;
    double price;
    Driver* driver;
};
