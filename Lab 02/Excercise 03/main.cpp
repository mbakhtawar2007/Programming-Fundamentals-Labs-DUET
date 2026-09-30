#include <iostream>
using namespace std;

int main()
{
    int n1, n2, Sum, Sub, Mul, Div, Mod;

    cout << "Enter your first number: ";
    cin >> n1;

    cout << "Enter your second number: ";
    cin >> n2;

    Sum = n1 + n2;
    Sub = n1 - n2;
    Mul = n1 * n2;
    Div = n1 / n2;
    Mod = n1 % n2;

    cout << "Sum: " << Sum << endl;
    cout << "Subtraction: " << Sub << endl;
    cout << "Multiplication: " << Mul << endl;
    cout << "Division: " << Div << endl;
    cout << "Modulus: " << Mod << endl;
    return 0;
}