// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	// approach 2 - O(n^2) time O(n) space

	int csum[101]; // based on constraints

	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1]+arr[i-1];
	}

	// for(int i=0; i<=n; i++) {
	// 	cout << csum[i] << " ";
	// }

	// cout << endl;

	int lsf = INT_MIN; // to the largest subarray sum so far
	int start; // to track the starting index of the subarray with the maximum sum
	int end; // to track the ending index of the subarray with the maximum sum

	// iterate over all the possible starting indices
	for(int i=0; i<=n-1; i++) { 
		// for given i, iterate over all the possible ending indices
		for(int j=i; j<=n-1; j++) {
			// compute the sum of the arr[i...j]
			int sum = csum[j+1]-csum[i];
			if(sum > lsf) {
				lsf = sum;
				start = i;
				end = j;
			}
		}
	}

	for(int i=start; i<=end; i++) {
		cout << arr[i] << " ";
	}

	// cout << "sum(arr[" << start << "..." << end << "] = " << lsf << endl;
	cout << "maximum subarray sum = " << lsf << endl;


	return 0;
}