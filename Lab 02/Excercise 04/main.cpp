#include <iostream>
#include <string>
using namespace std;

int main (){
    string userName;
    int age;

    cout << "Enter your Name: ";
    getline (cin, userName);

    cout << "Enter your Age: ";
    cin >> age;

    cout << "Hi " << userName << "! You are " << age << " years old.";

    getchar();
    return 0;

}