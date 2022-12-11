#include<iostream>

using namespace std;

int main() {

	int age;
	cout << "enter your age : ";
	cin >> age;

	if(age >= 18) {
		cout << "you are eligible for voting." << endl;
	}

	cout << "you are outside the body of if-block" << endl;
	
	return 0;
}