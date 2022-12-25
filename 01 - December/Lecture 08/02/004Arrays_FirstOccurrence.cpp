// n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[100];

	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int t;
	cin >> t;

	int i;

	for(i=0; i<n; i++) {
		if(arr[i] == t) {
			// you've found the target at the ith index
			cout << i << " ";
			break;
		}
	}

	if(i == n) {
		cout << -1 << endl;
	}

	return 0;
}