// constraints : n <= 100

#include<iostream>

using namespace std;

void merge(int* arr, int s, int m, int e) {

	int i = s;
	int j = m+1;
	int k = s;

	int brr[100]; // based on the constraints

	while(i <= m and j <= e) {
		if(arr[i] < arr[j]) {
			brr[k] = arr[i];
			i++;
			k++;
		} else {
			brr[k] = arr[j];
			j++;
			k++;
		}
	}

	while(i <= m) {
		brr[k] = arr[i];
		i++;
		k++;
	}

	while(j <= e) {
		brr[k] = arr[j];
		j++;
		k++;
	}

	// copy contents of brr[s...e] to arr[s...e]
	for(int l=s; l<=e; l++) {
		arr[l] = brr[l];
	}

}

void mergeSort(int* arr, int s, int e) {

	// base case
	if(s == e) {
		// sort arr[s...s] or arr[e...e] : since it is already sorted, you don't have to do anything
		return;
	}

	// recursive case

	// sort arr[s...e]

	int m = s+(e-s)/2;

	// 1. sort arr[s...m] -> friend
	mergeSort(arr, s, m);

	// 2. sort arr[m+1..e] -> friend
	mergeSort(arr, m+1, e);

	// 3. merge the two sorted subarray arr[s...m] and arr[m+1...e]
	merge(arr, s, m, e);

}

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	mergeSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}