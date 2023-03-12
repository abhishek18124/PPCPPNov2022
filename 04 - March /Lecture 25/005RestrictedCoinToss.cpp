// n <= 9

#include<iostream>

using namespace std;

void generateOutcomes(int n, char* out, int i,  int j) {

	// base case
	if(i == n) { // or j == n
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// generate the outcomes for coins[i...n-1] 

	// toss the ith coin

	// 1. it shows head
	if(i == 0 || out[j-1] != 'H') {
		out[j] = 'H';
		generateOutcomes(n, out, i+1, j+1);
	}

	// 2. it shows tail
	out[j] = 'T';
	generateOutcomes(n, out, i+1, j+1);

}

int main() {

	int n = 3;

	char out[10];

	generateOutcomes(n, out, 0, 0);

	return 0;
}