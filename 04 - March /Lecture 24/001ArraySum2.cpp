#include<iostream>

using namespace std;

int f(int* x, int i) {

	// base case
	// if(i == 0) {
	// 	// compute sum(x[0..0])
	// 	return x[0];
	// }

	if(i == -1) {
		// compute sum(x[0...-1]) i.e. empty subarray
		return 0;
	}

	// recursive case

	// compute sum(x[0...i])

	// 1. ask your friend to compute sum(x[0...i-1])

	int A = f(x, i-1);

	return A+x[i];
}

int main() {

	int x[] = {10, 20, 30, 40, 50};
	int n = sizeof(x) / sizeof(int);

	cout << f(x, n-1) << endl;

	return 0;
}