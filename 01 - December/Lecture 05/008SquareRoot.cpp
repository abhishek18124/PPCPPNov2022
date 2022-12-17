#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	double square_root_of_n = 0;

	// 1. for the integer part

	while(square_root_of_n*square_root_of_n <= n) {
		square_root_of_n = square_root_of_n + 1;
	}

	square_root_of_n = square_root_of_n-1;

	// 2. for the first precision

	while(square_root_of_n*square_root_of_n <= n) {
		square_root_of_n = square_root_of_n + 0.1;
	}

	square_root_of_n = square_root_of_n-0.1;

	// 3. for the second precision

	while(square_root_of_n*square_root_of_n <= n) {
		square_root_of_n = square_root_of_n + 0.01;
	}

	square_root_of_n = square_root_of_n-0.01;

	// 4. for the third precision

	while(square_root_of_n*square_root_of_n <= n) {
		square_root_of_n = square_root_of_n + 0.001;
	}

	square_root_of_n = square_root_of_n-0.001;

	cout << square_root_of_n << endl;
	
	return 0;
}