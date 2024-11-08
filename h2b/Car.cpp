#include "Car.h"

// Konstruktori
Car::Car(const std::string &brand, const std::string &model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel) {}

// Tulostusmetodi
void Car::printData() const {
    std::cout << "Brand: " << brand << "\n"
              << "Model: " << model << "\n"
              << "Year: " << yearModel << std::endl;
}
