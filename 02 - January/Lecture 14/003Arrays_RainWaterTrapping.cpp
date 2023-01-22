#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	int total = 0;

	// approach - O(n^2) time

	for(int i=0; i<n; i++) {

		// w_i = min(l_i, r_i) - h_i

		int l_i = h[i];
		for(int j=i-1; j>=0; j--) {
			l_i = max(l_i, h[j]);
		}

		int r_i = h[i];
		for(int j=i+1; j<n; j++) {
			r_i = max(r_i, h[j]);
		}

		int w_i = min(l_i, r_i) - h[i];

		total += w_i;

	}


	cout << total << endl;

	return 0;
}