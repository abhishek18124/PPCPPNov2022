#include<iostream>

using namespace std;

int main() {

	int n = 4;

	int i = 1;
	int no = 1;
	
	while(i <= n) {

		// for the ith row, print 'i' nos. from 1 to i

		int j = 1;
		
		while(j <= i) {
			cout << no << " ";
			j++;
			no++;
		}

		i++;

		cout << endl;

	}

	return 0;
}