#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter your age: ";
	cin >> age;

	cout << (age >= 18 ? "You can vote." : "You cannot vote.") << endl;

	return 0;
}
