#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    cout << "Compute quotient and remainder :" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Input the dividend : ";
    cin >> dividend;

    cout << "Input the divisor : ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error! Divisor cannot be zero." << endl;
        return 1;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The quotient of the division is : " << quotient << endl;
    cout << "The remainder of the division is : " << remainder << endl;

    return 0;
}