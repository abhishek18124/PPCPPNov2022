#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;

	while(i <= n) {

		// for the ith row, print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << " ";
			j++;
		}

		// followed by i nos. in the increasing order starting with 'i'
		j = 1;
		int no = i;
		while(j <= i) {
			cout << no;
			j++;
			no++;
		}

		i++;

		cout << endl;

	}

	return 0;
}