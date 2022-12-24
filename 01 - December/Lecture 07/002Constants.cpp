#include<iostream>

using namespace std;

int main() {

	// const int y; // error, it is imp. to initialise a const variable

	const int x = 10;

	// x++; // x = x+1 -> x is read-only variable

	cout << x << endl;
	
	cout << x+1 << endl;

	cout << x << endl;
	
	return 0;
}