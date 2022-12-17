#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer (n) : ";
	cin >> n;

	int p;
	cout << "Enter a positive integer (p) : ";
	cin >> p;

	double square_root_of_n = 0;
	double increment_factor = 1;

	int i = 1;
	while(i <= p+1) {

		while(square_root_of_n*square_root_of_n <= n) {
			square_root_of_n = square_root_of_n + increment_factor;
		}

		square_root_of_n = square_root_of_n-increment_factor;
		increment_factor = increment_factor / 10;
		i++;
	}

	cout << square_root_of_n << endl;
	
	return 0;
}