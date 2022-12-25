#include<iostream>

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	int B[] = {100, 200, 300};
	int m = sizeof(B) / sizeof(int);

	for(int i=0; i<m; i++) {
		cout << B[i] << " ";
	}

	cout << endl;

	// int C[5] = {1000, 2000, 3000, 4000, 5000, 6000}; // error

	int D[5] = {};

	for(int i=0; i<5; i++) {
		cout << D[i] << " ";
	}

	cout << endl;
	
	return 0;
}