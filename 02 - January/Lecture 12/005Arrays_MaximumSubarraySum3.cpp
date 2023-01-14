// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	// // approach - O(n) time and O(n) space

	// int x[100];

	// x[0] = arr[0];
	// int lsf = x[0];

	// for(int i=1; i<=n-1; i++) {
	// 	x[i] = max(x[i-1]+arr[i], arr[i]);
	// 	lsf = max(x[i], lsf);
	// }

	// // int lsf = INT_MIN;
	// // for(int i=0; i<n; i++) {
	// // 	lsf = max(lsf, x[i]);
	// // }

	// approach - O(n) time and O(1) space

	int x = arr[0];
	int lsf = x;

	for(int i=1; i<=n-1; i++) {
		x = max(x+arr[i], arr[i]);
		lsf = max(x, lsf);
	}

	cout << lsf << endl;

	return 0;
}