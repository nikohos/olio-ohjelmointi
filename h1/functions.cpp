#include <iostream>
#include <iomanip>
#include "functions.h"
using namespace std;

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "Lukujen summa: " << sum << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei voi olla nolla." << endl;
    } else {
        double div = static_cast<double>(a) / b;
        cout << "Lukujen osamäärä: " << fixed << setprecision(2) << div << endl;
    }
}

// Laskee ja palauttaa summan ilman tulostusta
    int retSum(int a, int b) {
    return a + b;
}

// Laskee ja palauttaa osamäärän float-tyyppisenä
float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei voi olla nolla." << endl;
        return 0.0f;
    } else {
        return static_cast<float>(a) / b;
    }
}
