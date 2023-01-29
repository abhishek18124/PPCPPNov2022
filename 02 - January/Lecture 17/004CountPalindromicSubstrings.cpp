#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(string s) {
	int i = 0;
	int j = s.size()-1;
	while(i < j) {
		if(s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {

	string s = "abc";
	int n = s.size();

	int count = 0;

	// // time : O(n^3)

	// // iterate over all the possible starting indices
	// for(int i=0; i<n; i++) {
	// 	/// iterate over all the possible ending indices
	// 	for(int j=i; j<n; j++) {
	// 		// extract the subString that starts at ith index and ends at jth index
	// 		string subString = s.substr(i, j-i+1);
	// 		if(isPalindrome(subString)) {
	// 			count++;
	// 		}
	// 	}
	// }

	// 1. count the number of odd-length palindromic substring

	int oddCount = 0;

	for(int i=0; i<n; i++) {

		// count the no. of palindromic substrings which are centred around i
		int j = 0;
		while(i-j >= 0 and i+j <n and s[i-j] == s[i+j]) {
			oddCount++;
			j++;
		}

	}

	cout << oddCount << endl;

	// 1. count the number of even-length palindromic substring

	int evenCount = 0;

	for(float i=0.5; i<n; i++) {

		// count the no. of palindromic substrings which are centred around i
		float j = 0.5;
		while(i-j >= 0 and i+j <n and s[(int)(i-j)] == s[(int)(i+j)]) {

			evenCount++;
			j++;
		}

	}

	cout << evenCount << endl;

	cout << oddCount + evenCount << endl;
	
	return 0;
}



