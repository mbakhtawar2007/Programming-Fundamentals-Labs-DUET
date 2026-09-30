#include <iostream>
using namespace std;

int main() {
	double units;
	double bill;

	cout << "Enter electricity units consumed: ";
	cin >> units;

	if (units < 0) {
		cout << "Units cannot be negative." << endl;
		return 1;
	}

	if (units <= 100) {
		bill = units * 10;
	} else if (units <= 200) {
		bill = 100 * 10 + (units - 100) * 15;
	} else {
		bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
	}

	cout << "Electricity bill: Rs. " << bill << endl;

	return 0;
}
