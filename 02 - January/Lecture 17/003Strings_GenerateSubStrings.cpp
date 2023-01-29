#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "abcde";
	int n = str.size();

	// iterate over starting indices
	for(int i=0; i<n; i++) {
		// iterate over ending indices
		for(int j=i; j<n; j++) {
			// genertate the subString that starts at i and ends at j

			// cout << str.substr(i, j-i+1) << endl;

			string subString = str.substr(i, j-i+1);
			cout << subString << endl;

		}

		cout << endl;
	}
	
	return 0;
}