#include<iostream>

using namespace std;

bool flag = false; // assume 't' is not present in the given array

void f(int* x, int n, int i, int t) {
	// base case
	
	if(i == n) {
		// find the idx of the first occ. of the 't' in x[n...n-1] i.e. empty subarray
		if(flag == false) {
			cout << -1 << " ";
		}
		return;
	}
	// recursive case

	// find the idx of the first occ, of the 't' in x[i...n-1]
	if(x[i] == t) {
		flag = true;
		cout << i << " ";
	}

	// find the idx of the first occ. of the 't' in x[i+1...n-1] -> friend
	f(x, n, i+1, t);
	
}


int main() {

	int arr[] = {10, 20, 30, 20, 30};
	int n = sizeof(arr) / sizeof(int);
	int t = 50;

	f(arr, n, 0, t);

	return 0;
}