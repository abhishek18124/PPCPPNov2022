// contraints : m <= 10 and n <= 10

#include<iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int arr[20];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int brr[10];
	for(int i=0; i<m; i++) {
		cin >> brr[i];
	}

	int i = n-1;
	int j = m-1;
	int k = m+n-1;

	while(i >= 0 and j >= 0) {

		if(arr[i] > brr[j]) {
			arr[k] = arr[i];
			k--;
			i--;
		} else {
			arr[k] = brr[j];
			k--;
			j--;
		}

	}

	while(j >= 0) {
		arr[k] = brr[j];
		k--;
		j--;
	}

	for(int i=0; i<m+n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	return 0;
	
}