#include <iostream>
#include <vector>
#include "Car.h"

int main() {
    // Luo Car-olioita
    Car car1("Opel", "Karl", 2002);
    Car car2("Lada", "Samara", 1984);
    Car car3("Nissan", "Sunny", 1992);

    // Luo oliolista käyttäen std::vector
    std::vector<Car> carList;

    // Lisää oliot listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Tulosta listan toisen alkion tiedot
    std::cout << "Toisen alkion tiedot:" << std::endl;
    carList[1].printData();

    std::cout << "---------------------" << std::endl;

    // Tulosta kaikkien autojen tiedot for-silmukalla
    std::cout << "Kaikkien autojen tiedot:" << std::endl;
    for (const Car &car : carList) {
        car.printData();
        std::cout << "---------------------" << std::endl;
    }

    return 0;
}
