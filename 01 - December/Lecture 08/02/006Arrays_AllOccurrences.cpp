#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	bool flag = false; // assume 't' is not present

	for(int i=0; i<n; i++) {
		if(arr[i] == t) {
			cout << i << " ";
			flag = true;
		}
	}

	// if(flag == false) {
	// 	// target not found
	// 	cout << -1 << endl;
	// }

	if(not flag) {
		// target not found
		cout << -1 << endl;
	}



	return 0;
}