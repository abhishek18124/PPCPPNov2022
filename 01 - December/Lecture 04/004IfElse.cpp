#include<iostream>

using namespace std;

int main() {

	int age;
	cout << "enter your age : ";
	cin >> age;

	if(age >= 18) {
		cout << "you are eligible for voting" << endl;
	} else {
		cout << "you are not eligible for voting" << endl;
	}

	cout << "you are outside the if-else block" << endl;

	return 0;
}