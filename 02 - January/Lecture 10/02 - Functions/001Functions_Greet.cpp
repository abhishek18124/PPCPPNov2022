#include<iostream>

using namespace std;

void greet() {
	cout << "I am inside the greet()" << endl;
	return; // optional
}

int main() {

	cout << "I am inside the main() before calling greet()" << endl;

	greet();

	cout << "I am inside the main() after calling greet()" << endl;

	return 0;
}