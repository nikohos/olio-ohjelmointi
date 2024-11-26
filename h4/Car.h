#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>

class Car {
private:
    Engine engine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    std::string model;
    std::string brand;

public:
    Car(const std::string& br, const std::string& mdl);
    void setEngine(int horsepower, double displacement);
    void setWheels(int size, const std::string& type);
    void printDetails() const;
};

#endif
