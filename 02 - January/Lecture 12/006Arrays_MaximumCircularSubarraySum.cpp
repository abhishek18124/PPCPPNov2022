// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 2, -4, 3, -5, -6, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	// approach - O(n) time and O(1) space

	int x = arr[0];
	int lsf = x;

	int y = arr[0];
	int ssf = y;

	int t = arr[0]; // to track the total sum

	for(int i=1; i<=n-1; i++) {
		t += arr[i];

		x = max(x+arr[i], arr[i]);
		y = min(y+arr[i], arr[i]);

		lsf = max(x, lsf);
		ssf = min(y, ssf);
	}

	// cout << "maximum subarray sum : " << lsf << endl;
	// cout << "minimum subarray sum : " << ssf << endl;
	// cout << "total subarray sum : " << t << endl;
	// cout << "maximum circular subarray sum : " << t-ssf << endl;

	// cout << "final answer = " << max(lsf, t-ssf) << endl;

	if(ssf == t) {
		// all values in the array are negative
		cout << "final answer = " << lsf << endl;
	} else {
		cout << "final answer = " << max(lsf, t-ssf) << endl;
	}

	return 0;
}