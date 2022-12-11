#include<iostream>

using namespace std;

int main() {

	int a;
	cout << "Enter the first number : ";
	cin >> a;

	int b;
	cout << "Enter the second number : ";
	cin >> b;

	int c;
	cout << "Enter the third number : ";
	cin >> c;

	if(a > b and a > c) {
		cout << a << " is the largest" << endl;
	} else {
		// either b is the largest or c is the largest
		if(b > c) {
			cout << b << " is the largest" << endl;
		} else {
			cout << c << " is the largest" << endl;
		}
	}


	// if(a > b and a > c) {
	// 	cout << a <<  " is the largest " << endl;
	// } else if(b > a and b > c) {
	// 	cout << b << " is the largest" << endl;
	// } else {
	// 	cout << c << " is the largest" << endl;
	// }


	return 0;
}