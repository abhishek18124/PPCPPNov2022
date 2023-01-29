#include<iostream>
#include<algorithm>

using namespace std;

bool isGoodString(string str) {

	for(int i=0; str[i] != '\0'; i++) {
		if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
			// ith char is a consonant
			return false;
		}
	}
	return true;

}


int longestGoodSubstring(string str) {

	int n = str.size();
	int lsf = 0;

	// iterate over the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over the possible ending indices
		for(int j=i; j<n; j++) {
			// extract the subString which starts at the ith index and ends at the jth index
			string subString = str.substr(i, j-i+1);
			if(isGoodString(subString)) {
				// track the length of the subString
				lsf = max(lsf, j-i+1);
			}
		}
	}

	return lsf;

}

int longestGoodSubstringEfficient(string str) {

	int n = str.size();

	int count = 0;
	int lsf = 0;

	for(int i=0; str[i] != '\0'; i++) {
		if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
			// ith char is a consonant
			count = 0;
		} else {
			// ith char is a vowel
			count++;
			lsf = max(lsf, count);
		}
	}

	return lsf;

}

int main() {

	string str = "cbaeicdeiou";
	
	cout << longestGoodSubstring(str) << endl;
	cout << longestGoodSubstringEfficient(str) << endl;
	
	return 0;
}