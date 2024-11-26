#include "Car.h"
#include <iostream>

Car::Car(const std::string& br, const std::string& mdl)
    : objWheel1(), objWheel2(), objWheel3(), objWheel4(), model(mdl), brand(br) {}

void Car::setEngine(int horsepower, double displacement) {
    engine.setHorsepower(horsepower);
    engine.setDisplacement(displacement);
}

void Car::setWheels(int size, const std::string& type) {
    objWheel1.setSize(size);
    objWheel1.setType(type);

    objWheel2.setSize(size);
    objWheel2.setType(type);

    objWheel3.setSize(size);
    objWheel3.setType(type);

    objWheel4.setSize(size);
    objWheel4.setType(type);
}

void Car::printDetails() const {
    std::cout << "Auto: " << brand << " " << model << "\n";
    std::cout << "Moottori: " << engine.getHorsepower() << " hp, "
              << engine.getDisplacement() << " L\n";

    std::cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << "\n";
    std::cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << "\n";
    std::cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << "\n";
    std::cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << "\n";
}
