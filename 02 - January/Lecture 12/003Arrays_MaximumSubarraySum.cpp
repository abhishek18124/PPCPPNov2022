#include<iostream>
#include<climits>

using namespace std;

int main() {

	// approach 1 - O(n^3) time O(1) space

	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	int lsf = INT_MIN; // to the largest subarray sum so far
	int start; // to track the starting index of the subarray with the maximum sum
	int end; // to track the ending index of the subarray with the maximum sum

	// iterate over all the possible starting indices
	for(int i=0; i<=n-1; i++) { 
		// for given i, iterate over all the possible ending indices
		for(int j=i; j<=n-1; j++) {
			// compute the sum of the arr[i...j]
			int sum = 0;
			for(int k=i; k<=j; k++) {
				sum += arr[k];
			}
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