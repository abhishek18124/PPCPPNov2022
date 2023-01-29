#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "abcde";
	int n = str.size();

	for(int l=1; l<=n; l++) {

		// generate all the subString of length 'l'

		for(int i=0; i<=n-l; i++) {

			// generate the subString that starts at the ith index of length l

			cout << str.substr(i, l) << endl;

		}

		cout << endl;

	}
	
	return 0;
}