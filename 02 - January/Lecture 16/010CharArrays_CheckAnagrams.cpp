#include<iostream>

using namespace std;

bool checkAnagram(char* str1, char* str2) {

	int freq1[26] = {};
	for(int i=0; str1[i] != '\0'; i++) {
		char ch = str1[i];
		int idx = ch-'a';
		freq1[idx]++;
	}

	for(int i=0; i<26; i++) {
		cout << freq1[i] << " ";
	}

	cout << endl;


	int freq2[26] = {};
	for(int i=0; str2[i] != '\0'; i++) {
		// char ch = str2[i];
		// int idx = ch-'a';
		// freq2[idx]++;

		freq2[str2[i]-'a']++;

	}


	for(int i=0; i<26; i++) {
		cout << freq2[i] << " ";
	}

	cout << endl;

	for(int i=0; i<26; i++) {
		if(freq1[i] != freq2[i]) {
			return false;
		}
	}

	return true;

}

int main() {

	char str1[] = "aaaabbbccd";
	char str2[] = "bbbaaaaddc";

	checkAnagram(str1, str2) ? cout << "true" << endl :
	                           cout << "false" << endl;

	return 0;
}