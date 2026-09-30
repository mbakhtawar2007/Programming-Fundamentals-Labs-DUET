#include <iostream>
using namespace std;

int main()
{
    int maths, english, urdu, computer, physics, totalMarks, obtainMarks;
    float percentage;

    cout << "Enter your Maths marks: ";
    cin >> maths;

    cout << "Enter your English marks: ";
    cin >> english;

    cout << "Enter your Urdu marks: ";
    cin >> urdu;

    cout << "Enter your Computer marks: ";
    cin >> computer;

    cout << "Enter your Physics marks: ";
    cin >> physics;

    cout << "Enter your Total marks: ";
    cin >> totalMarks;

    obtainMarks = maths + english + urdu + computer + physics;
    percentage = (obtainMarks / (float)totalMarks) * 100;

    cout << "Obtain Marks: " << obtainMarks << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << endl;

    return 0;
}