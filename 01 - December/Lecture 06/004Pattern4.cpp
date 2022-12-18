#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	
	while(i <= n) {

		// for the ith row, print 'i' nos. 

		// int no;
		// if(i%2 == 0) {
		// 	// ith row is even row
		// 	no = 0;
		// } else {
		// 	// ith row is odd row
		// 	no = 1;
		// }

		int no = i%2 == 0 ? 0 : 1;

		int j = 1;
		
		while(j <= i) {
			cout << no << " ";
			j++;
			no = 1-no;
		}

		i++;

		cout << endl;

	}

	return 0;
}