#include<iostream>

using namespace std;

int main() {

	// approach 3 - O(n) time O(1) space

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	int l = 0; // or INT_MIN or h[0] // to store max(num[0...i])
	int r = 0; // or INT_MINto or h[n-1] // store max(num[j...n-1])

	int i = 0;
	int j = n-1;

	int total = 0;

	while(i <= j) {
		l = max(l, h[i]);
		r = max(r, h[j]);

		if(l < r) {
			int w_i = l-h[i];
			total += w_i;
			i++;
		} else {
			int w_j = r-h[j];
			total += w_j;
			j--;
		}
	}

	cout << total << endl;

	return 0;
}