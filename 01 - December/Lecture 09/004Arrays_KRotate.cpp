#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int k = 3;

	// for(int j=0; j<k; j++) {
	// 	int temp = arr[n-1];
	// 	for(int i=n-2; i>=0; i--) {
	// 		arr[i+1] = arr[i];
	// 	}
	// 	arr[0] = temp;
	// }

	// 1. reverse the first n-k elements

	int i = 0;
	int j = n-k-1;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}


	// 2. reverse the last k elements

	i = n-k;
	j = n-1;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}


	// 3. reverse the entire array

	i = 0;
	j = n-1;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}


	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}