#include<iostream>
#include<algorithm>

using namespace std;

int main() {	

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	int count = 0;

	// approach 1 - time O(n^2)

	// for(int i=0; i<n-1; i++) {
	// 	for(int j=i+1; j<n; j++) {
	// 		if(arr[i]+arr[j] == t) {
	// 			count++;
	// 		}
	// 	}
	// }

	// approach 2 - 2 pointer approach O(n) time

	int i = 0;
	int j = n-1;

	while(i < j) {
		if(arr[i]+arr[j] == t) {
			count++;
			i++;
			j--;
		} else if(arr[i]+arr[j] > t) {
			j--;
		} else { // arr[i]+arr[j] < t
			i++;
		}
	}

	cout << count << endl;

	return 0;
}