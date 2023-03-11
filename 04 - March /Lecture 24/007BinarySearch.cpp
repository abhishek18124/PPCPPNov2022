#include<iostream>

using namespace std;

int binarySearch(int* arr, int s, int e, int t) {

	// base case
	if(s > e) {
		// search space is empty
		return -1;
	}

	// recursive case

	// search for the 't' in the sorted subarray arr[s...e]

	int m = s+(e-s)/2;
	if(arr[m] == t) {
		return m;
	}

	if(t > arr[m]) {
		// search for the 't' in the sorted subarray arr[m+1...e] -> ask your friend
		return binarySearch(arr, m+1, e, t);
	}

	// t < arr[m]

	// search for the 't' in the sorted subarray arr[s...m-1] -> ask your friend
	return binarySearch(arr, s, m-1, t);

}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	cout << binarySearch(arr, 0, n-1, t) << endl;


	return 0;
}