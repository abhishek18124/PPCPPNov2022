#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	int count = 0;

	for(int i=1; i<=n-1; i++) {

		bool flag = false; // assume no swaps will be done in the ith pass

		// in the ith pass, we place the largest element in the
		// un-sorted part of the array to its correct position.

		for(int j=0; j<n-i; j++) {
			count++;
			if(arr[j] > arr[j+1]) {
				flag = true;
				swap(arr[j], arr[j+1]);
			}
		}

		if(flag == false) {
			break;
		}

	}

	cout << count << endl;
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	return 0;
}