#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori, joka alustaa jäsenmuuttujat
    Car(const std::string &brand, const std::string &model, int yearModel);

    // Metodi tulostaa auton tiedot
    void printData() const;
};

#endif // CAR_H
