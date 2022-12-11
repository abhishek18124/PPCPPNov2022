#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	if(n == 0 || n == 1) {
		cout << n << endl;
	} else {

		int a = 0; // to store the 0th fib. no.
		int b = 1; // to store the 1st fib. no.

		int i = 2;

		while(i <= n) {
			// compute the ith fibonacci no. 
			int c = a+b;
			a = b;
			b = c;
			i = i+1;
		}

		// cout << c << endl; // either declare 'c' outside while-loop or

		cout << b << endl;

	}

	return 0;
}