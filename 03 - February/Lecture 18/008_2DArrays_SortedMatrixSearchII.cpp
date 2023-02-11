#include<iostream>

using namespace std;

bool search(int mat[][3], int m, int n, int t) {

	int i = 0;
	int j = n-1;

	while(i < m and j >= 0) {

		cout << "comparing " << t << " with " << mat[i][j] << endl;

		if(mat[i][j] == t) {
			// you've found the target
			return true;
		} else if(t > mat[i][j]) {
			i++;
		} else {
			j--;
		}
	}

	// 't' is not present
	return false;

}

int main() {

	int mat[][3] = {{10, 20, 30},
					{40, 50, 60},
					{70, 80, 90}};

	int m = 3;
	int n = 3;

	int t = 65;

	search(mat, m, n, t) ? cout << t << " found!" << endl :
	                       cout << t << " not found!" << endl;

	return 0;
}