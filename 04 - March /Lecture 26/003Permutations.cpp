/*

Given a string (sequence of characters) of length n, generate all of its permutations. 

Example
	
	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

#include<iostream>

using namespace std;

void generatePermutations(char* inp, int n, int i) {

	// base case
	if(inp[i] == '\0') { // i == n
		cout << inp << endl;
		return;
	}

	// recursive case

	// generate permutations of inp[i...n-1]

	// decide which character is assigned to the ith position

	for(int j=i; j<n; j++) {
		swap(inp[i], inp[j]);
		generatePermutations(inp, n, i+1);
		swap(inp[i], inp[j]); // backtracking
	}

}

int main() {

	char inp[] = "aabc";
	int n = strlen(inp);

	generatePermutations(inp, n, 0);

	return 0;
}
