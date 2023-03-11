#include<iostream>

using namespace std;

int f(int* x, int i, int t) {

	// base case
	// if(i == 0) {
	// 	// find the idx of the last occ. of the 't' in x[0...0]
	// 	if(x[i] == t) {
	// 		return 0; // or i
	// 	} else {
	// 		// t is not found
	// 		return -1;
	// 	}
	// }

	if(i == -1) {
		// find the idx of the last occ. of the 't' in x[0...-1] i.e. empty subarray
		return -1;
	}

	// recursive case

	// find the idx of the last occ. of the 't' in x[0...i]

	if(x[i] == t) {
		return i;
	}

	// find the idx of the last occ. of the 't' in x[0...i-1] -> ask your friend
	return f(x, i-1, t);


}

int main() {

	int x[] = {10, 20, 30, 20, 30};
	int n = sizeof(x) / sizeof(int);
	int t = 20;

	cout << f(x, n-1, t) << endl;

	return 0;
}