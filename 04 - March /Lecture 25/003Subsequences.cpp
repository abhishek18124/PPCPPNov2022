/*

Given a string of length n, generate all of its subsequences. 

A subsequence of a given string (sequence) is a string (sequence) that is generated by 
removing zero or more characters from the given string (sequence) without changing its 
order.

Example
	
	Input : inp[] = "abc"
	Output: ["", "c", "b", "bc", "a", "ac", "ab", "abc"]

Constraints
 
  1 < n < 10

*/

#include<iostream>

using namespace std;

void generateSubsequences(char* inp, char* out, int i, int j) {

	// base case
	if(inp[i] == '\0') { // i == n
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// generate the subsequences for inp[i...n-1] or take a sequence of n-i decisions

	// decide for the ith character

	// 1. include the ith character in the out subsequence
	out[j] = inp[i];
	generateSubsequences(inp, out, i+1, j+1);

	// 2. exclude the ith character from the out subsequence
	generateSubsequences(inp, out, i+1, j);

}

int main() {

	char inp[] = "abc";
	char out[10];

	generateSubsequences(inp, out, 0, 0);
	
	return 0;
}