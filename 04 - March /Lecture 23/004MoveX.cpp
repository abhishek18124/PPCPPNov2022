/*

Given a string str, design a recursive algorithm to move all the occurrence of letter x 
to the end of the string str.

Example 
	Input : str = "axbcxdxfx"
	Output: str = "abcdfxxxx"

	Input : str = "xabcxdxfx"
	Output: str = "abcdfxxxx"

*/

#include<iostream>

using namespace std;

string f(string str) {

	// base case
	if(str == "") { // str.empty() or str.size() == 0
		return "";
	}

	// recursive case

	// 1. extract the substring of the given string starting at the 1st index
	string subString = str.substr(1);
	// 2. ask your friend to move all 'x' characters to the end in subString
	string stringFromMyFriend = f(subString);

	string ch = string(1, str[0]);
	if(ch == "x") {
		return stringFromMyFriend + ch;
	} else {
		return ch + stringFromMyFriend;
	}

}

int main() {

	string str = "xaxbxc";

	cout << f(str) << endl;

	return 0;
}