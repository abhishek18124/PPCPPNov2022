#include<iostream>
#include<algorithm>

using namespace std;

bool search(int mat[][3], int m, int n, int t) {

	for(int i=0; i<m; i++) {
		// apply the binary search algorithm to search for the 't' in row 'i'
		if(binary_search(mat[i], mat[i+1], t)) {
			// you've found the 't' in the ith row
			return true;
		}
	}

	// target not found
	return false;

} 

int main() {

	int mat[][3] = {{40, 50, 60},
					{10, 20, 30},
					{70, 80, 90}};

	int m = 3;
	int n = 3;

	int t = 500;

	search(mat, m, n, t) ? cout << t << " found!" << endl :
	                       cout << t << " not found!" << endl;

	return 0;
}