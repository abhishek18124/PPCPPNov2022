#include<iostream>

using namespace std;

int main() {

	// int arr[5];

	// cout << sizeof(arr) << "B" << endl;

	// int n = sizeof(arr) / sizeof(int);

	// arr[0] = 10;
	// arr[1] = 20;
	// arr[2] = 30;
	// arr[3] = 40;
	// arr[4] = 50;

	// // cout << arr[0] << " ";
	// // cout << arr[1] << " ";
	// // cout << arr[2] << " ";
	// // cout << arr[3] << " ";
	// // cout << arr[4] << " ";

	// for(int i=0; i<n; i++) {
	// 	cout << arr[i] << " ";
	// }

	double brr[10];

	cout << "memory allocated = " << sizeof(brr) << "B" << endl;

	int m = sizeof(brr) / sizeof(double);

	cout << "length of the array = " << m << endl;

	// cin >> brr[0];
	// cin >> brr[1];
	// cin >> brr[2];
	// ...
	// cin >> brr[9];

	for(int i=0; i<m; i++) {
		cin >> brr[i];
	}

	for(int i=0; i<m; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;

	return 0;
}