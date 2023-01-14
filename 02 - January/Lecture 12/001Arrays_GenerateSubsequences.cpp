#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30};
	int n = sizeof(arr) / sizeof(int);

	for(int i=0; i<(1<<n); i++) { // iterate from 0 to 2^n-1

		// iterate over the n-bit representation of 'i' from right to left
		for(int j=0; j<n; j++) {
			// if(((i>>j)&1) == 1) {
			// 	cout << arr[j] << " ";
			// }

			if(i>>j&1) {
				cout << arr[j] << " ";
			}
			
		}

		cout << endl;

	}

	return 0;
}
