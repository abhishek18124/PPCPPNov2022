#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {

		// for the ith row,

		// 1. print (n-i+1) characters in the increasing order starting with 'A'

		char ch = 'A';
		for(int j=1; j<=n-i+1; j++) {
			cout << ch << " ";
			ch++;
		}

		// 2. print (n-i+1) characters in the decreasing order starting with the character with which the increasing pattern ends
		ch--;
		for(int j=1; j<=n-i+1; j++) {
			cout << ch << " ";
			ch--;
		}

		cout << endl;

	}

	return 0;
}