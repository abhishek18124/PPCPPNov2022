#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	if(n == 0 || n == 1) {
		cout << "true" << endl;
		return 0; // terminate the program
	}

	int a = 0; // to store the 0th fib. no.
	int b = 1; // to store the 1st fib. no.

	while(true) {

		// generate the next fibonacci no.

		int c = a+b;

		if(c == n) {
			cout << "true" << endl;
			return 0; // terminate the program
		} 

		if(c > n) {
			cout << "false" << endl;
			return 0; // terminate the program
		}

		a = b;
		b = c;

	}
	
	return 0;
}