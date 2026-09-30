#include <iostream>
using namespace std;

int main () {
    int hours, mins, secs;
cout << "Enter Hours: ";
cin >> hours;

cout << "Enter minutes: ";
cin >> mins;

mins = hours * 60;
secs = mins * 3600;

cout << "Total minutes: " << mins << endl;
cout << "Total seconds: " << secs << endl;
}