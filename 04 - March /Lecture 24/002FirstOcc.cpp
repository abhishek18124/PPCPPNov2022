#include<iostream>

using namespace std;

int f(int* x, int n, int i, int t) {
	// base case
	// if(i == n-1) {
	// 	// find the idx of the first occ. of the 't' in x[n-1...n-1]
	// 	if(x[i] == t) {
	// 		return i;
	// 	} else {
	// 		// 't' is not found
	// 		return -1;
	// 	}
	// }
	if(i == n) {
		// find the idx of the first occ. of the 't' in x[n...n-1] i.e. empty subarray
		return -1;
	}
	// recursive case

	// find the idx of the first occ, of the 't' in x[i...n-1]
	if(x[i] == t) {
		return i;
	}

	// find the idx of the first occ. of the 't' in x[i+1...n-1] -> friend
	int A = f(x, n, i+1, t);
	return A;
}

int main() {

	int x[] = {10, 20, 30, 20, 30};
	int n = sizeof(x) / sizeof(int);
	int t = 30;

	cout << f(x, n, 0, t) << endl;

	return 0;
}