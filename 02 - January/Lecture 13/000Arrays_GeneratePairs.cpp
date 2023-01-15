#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			cout << arr[i] << " " << arr[j] << endl;
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}