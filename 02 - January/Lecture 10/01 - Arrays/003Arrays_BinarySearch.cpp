#include<iostream>

using namespace std;

int main() {

	// time : O(logn) -> worst-case : target is not present in the array so eventually search space becomes empty i.e. s exceed e

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	int s = 0; // lower-bound of the search space
	int e = n-1; // upper-bound of the search space
	int m;

	while(s <= e) {

		m = s+((e-s)>>1); // s+(e-s)/2 // (s+e)/2 can lead to integer overflow
		if(arr[m] == t) {
			// t found at index 'm'
			break;
		} else if(t < arr[m]) {
			// reduce the search space from [s, e] to [s, m-1]
			e = m-1;
		} else { // t > arr[m]
			// reduce the search space from [s, e] to [m+1, e]
			s = m+1;
		}

	}

	if(s <= e) {
		cout << t << " found at index " << m << endl;
	} else {
		// s > e i.e. search space has become empty
		cout << t << " not found!" << endl;
	}

	return 0;
}