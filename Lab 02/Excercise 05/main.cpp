#include <iostream>
using namespace std;

main () {
    float celsius, fahrenheit;

    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << fahrenheit;
    return 0;
}