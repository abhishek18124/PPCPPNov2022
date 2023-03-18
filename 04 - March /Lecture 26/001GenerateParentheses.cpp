// n <= 8

#include<iostream>

using namespace std;

void generateParentheses(int n, int open_count, int close_count, char* out, int j) {

	// base case
	if(open_count == n and close_count == n) { // or j == 2*n
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// decide which character ('(' or ')') should be assigne to the jth position of the out[]

	// option 1 : '('

	if(open_count < n) {
		out[j] = '(';
		generateParentheses(n, open_count+1, close_count, out, j+1);
	}

	// option 2 : ')'

	if(close_count < n) {
		out[j] = ')';
		generateParentheses(n, open_count, close_count+1, out, j+1);
	}

}

int main() {

	int n = 3;

	char out[17]; // based on the constraints

	generateParentheses(n, 0, 0, out, 0);

	return 0;
}