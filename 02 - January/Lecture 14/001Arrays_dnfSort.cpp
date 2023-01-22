#include<iostream>

using namespace std;

int main() {	

	int arr[] = {1, 0, 1, 2, 0, 1, 2, 0, 1};
	int n = sizeof(arr) / sizeof(int);

	int low  = 0; // denotes the start of the 2nd part (ones)
	int mid  = 0; // denotes the start of the 3rd part (unknown)
	int high = n; // denotes the start of the 4th part (twos)
	
	/*

		arr[0.....low-1]  contains 0s
		arr[low...mid-1]  contains 1s
		arr[mid...high-1] contains unknown
		arr[high...n-1]   contains 2s

	*/

	while(mid < high) {

		if(arr[mid] == 0) {
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		} else if(arr[mid] == 1) {
			mid++;
		} else { // arr[mid] == 2
			high--;
			swap(arr[mid], arr[high]);
		}

	}

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	return 0;
}