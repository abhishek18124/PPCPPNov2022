#include<iostream>

using namespace std;

int f(int* x, int n, int i) {

	// base case
	
	// if(i == n-1) {
	// 	// compute sum(x[n-1...n-1])
	// 	return x[n-1];
	// }

	if(i == n) {
		// compute sum(x[n...n-1]) i.e. empty subarray
		return 0;
	}

	// recursive case

	// compute sum(x[i...n-1])

	// 1. ask your friend to compute sum(x[i+1...n-1])
	int A = f(x, n, i+1);

	return x[i] + A;

}

int main() {

	int x[] = {1, 2, 3, 4, 5};
	int n = sizeof(x) / sizeof(int);

	cout << f(x, n, 0) << endl;

	return 0;
}