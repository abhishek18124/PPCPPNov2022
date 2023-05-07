/*

	Implement a phonebook storing mapping between person's name and 
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include <vector>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["Krish"].push_back("1234");
	phoneMap["Krish"].push_back("5678");
	phoneMap["Krish"].push_back("0000");

	phoneMap["Saurabh"].push_back("9999");
	phoneMap["Saurabh"].push_back("8888");

	for(pair<string, vector<string>> contact : phoneMap) {
		string name = contact.first;
		vector<string> numbers = contact.second;
		cout << name << " : ";
		for(string num : numbers) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}