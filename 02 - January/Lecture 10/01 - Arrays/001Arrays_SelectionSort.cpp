#include<iostream>

using namespace std;

int main() {

	int arr[] = {50, 40, 10, 30, 20};
	int n = sizeof(arr) / sizeof(int);

	for(int i=0; i<=n-2; i++) {

		// in the ith-pass, you've to place the smallest
		// element in the un-sorted part of the array to
		// its correct position

		int min_idx = i;

		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}

		swap(arr[min_idx], arr[i]);

	}
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	return 0;
}