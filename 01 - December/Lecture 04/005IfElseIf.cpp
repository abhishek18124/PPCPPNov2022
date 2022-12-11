#include<iostream>

using namespace std;

int main() {

	int marks;
	cout << "enter your marks : ";
	cin >> marks;

	if(marks >= 91 and marks <= 100) {
		cout << "Your grade is A" << endl;
	} else if(marks >= 81 and marks <= 90) {
		cout << "Your grade is B" << endl;
	} else if(marks >= 71 and marks <= 80) {
		cout << "Your grade is C" << endl;
	} else {
		cout << "Your grade is D" << endl;
	}
	
	return 0;
}