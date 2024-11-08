#include <iostream>
#include <memory>  // Älyosoittimia varten
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {
    // Car-luokan käyttö
    Car myCar;
    myCar.setBrand("Opel");
    myCar.setModel("Karl");
    myCar.setYearModel(2022);
    myCar.printData();

    std::cout << "---------------------" << std::endl;

    // Rectangle-luokan käyttö
    Rectangle* rect = new Rectangle;
    rect->setWidth(5.0);
    rect->setHeight(3.0);
    std::cout << "Rectangle Area: " << rect->getArea() << std::endl;
    std::cout << "Rectangle Circumference: " << rect->getCircum() << std::endl;
    delete rect;  // Vapautetaan muisti

    std::cout << "---------------------" << std::endl;

    // Student-luokan käyttö smart pointerilla
    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->setName("Mel Gibson");
    student->setStudentNumber(909090);
    student->setAverage(4.8);

    // Tulostetaan opiskelijan tiedot get-metodeilla
    std::cout << "Student Name: " << student->getName() << std::endl;
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Student Average: " << student->getAverage() << std::endl;

    return 0;
}
