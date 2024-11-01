#include <iomanip>
#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    int a, b;

    // Kysytään käyttäjältä kaksi kokonaislukua
    cout << "Anna ensimmäinen kokonaisluku (a): ";
    cin >> a;

    cout << "Anna toinen kokonaisluku (b): ";
    cin >> b;

    // Kutsutaan funktioita laskemaan ja tulostamaan tulokset
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan funktioita, jotka palauttavat tulokset, ja tulostetaan ne
    int sum = retSum(a, b);
    cout << "Palautettu summa: " << sum << endl;

    float div = retDiv(a, b);
    cout << "Palautettu osamäärä: " << fixed << setprecision(2) << div << endl;

    return 0;
}
