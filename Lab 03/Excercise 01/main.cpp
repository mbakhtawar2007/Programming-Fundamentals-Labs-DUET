#include <iostream>
using namespace std;

int main () {
    float length, width, Area, Perimeter;

    cout << "Enter Length of the Object: ";
    cin >> length;

    cout << "Enter Width of the object: ";
    cin >> width;

    Area = length * width;
    Perimeter = 2 * (length + width);

    cout << "Area: " << Area << endl;
    cout << "Perimeter: " << Perimeter << endl;

    return 0;
}