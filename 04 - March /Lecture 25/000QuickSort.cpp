// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int* arr, int s, int e) {

	int pivot = arr[e];

	int i = s;
	int j = s-1;

	while(i < e) {
		if(arr[i] < pivot) {
			// move arr[i] to the left partition
			j++;
			swap(arr[i], arr[j]);
		}
		i++;
	}

	swap(arr[j+1], arr[e]);
	return j+1;

}

void quickSort(int* arr, int s, int e) {

	// base case
	if(s >= e) {
		return;
	}

	// recursive case

	// 1. partition the arr[s...e] around the pivot i.e arr[e]
	int pivot_idx = partition(arr, s, e);

	// 2. recursively sort the left partition arr[s...pivot_idx-1]
	quickSort(arr, s, pivot_idx-1);

	// 3. recursively sort the right partition arr[pivot_idx+1...e]
	quickSort(arr, pivot_idx+1, e);


}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}