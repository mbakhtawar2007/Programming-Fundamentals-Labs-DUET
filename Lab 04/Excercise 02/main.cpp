#include <iostream>
using namespace std;

int main() {
	double quizScore;
	double midtermScore;
	double finalScore;
	double average;

	cout << "Enter quiz score (0-100): ";
	cin >> quizScore;
	cout << "Enter midterm score (0-100): ";
	cin >> midtermScore;
	cout << "Enter final exam score (0-100): ";
	cin >> finalScore;

	if (quizScore < 0 || quizScore > 100 ||
		midtermScore < 0 || midtermScore > 100 ||
		finalScore < 0 || finalScore > 100) {
		cout << "Scores must be between 0 and 100." << endl;
		return 1;
	}

	average = (quizScore + midtermScore + finalScore) / 3;

	cout << "Average: " << average << endl;

	if (average >= 90) {
		cout << "Grade: A" << endl;
	} else if (average >= 80) {
		cout << "Grade: B" << endl;
	} else if (average >= 70) {
		cout << "Grade: C" << endl;
	} else if (average >= 60) {
		cout << "Grade: D" << endl;
	} else {
		cout << "Grade: F" << endl;
	}

	return 0;
}
