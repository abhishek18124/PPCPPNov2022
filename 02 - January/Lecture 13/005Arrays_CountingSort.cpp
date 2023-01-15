// contraints : n <= 100, k <= 9

#include<iostream>

using namespace std;

int main() {	

	// total ops ~ 2n+2k ~ O(n+k) time
	// total space ~ k+1 for cnt[] and n for brr[] i.e. O(n+k) space
 
	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
	int n = sizeof(arr) / sizeof(int);
	
	int k = 3; // denotes the maximum element in the array

	int cnt[10];
	memset(cnt, 0, sizeof(cnt));

	for(int i=0; i<n; i++) {
		cnt[arr[i]]++;
	}

	for(int i=1; i<=k; i++) {
		cnt[i] += cnt[i-1];
	}

	for(int i=k; i>=1; i--) {
		cnt[i] = cnt[i-1];
	}

	cnt[0] = 0;

	int brr[100];

	for(int i=0; i<n; i++) {
		// int x = arr[i];
		// int pos = cnt[x];
		// brr[pos] = x;
		// cnt[x]++;

		brr[cnt[arr[i]]++] = arr[i];

	}


	for(int i=0; i<n; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;


	return 0;
}