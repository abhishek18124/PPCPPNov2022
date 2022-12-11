#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int sum = 0; // to track the sum of digits of 'n' 
	
	while(n > 0) {
		// int digit = n%10;
		// sum = sum + digit;
		sum = sum + (n%10);
		n = n/10;
	}

	cout << "sum of digits = " << sum << endl;
	
	return 0;
}