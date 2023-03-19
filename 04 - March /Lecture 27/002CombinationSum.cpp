#include<iostream>
#include<vector>

using namespace std;

void generateCombinations(int t, vector<int> c, vector<int>& comb, int i) {

	// base case

	if(t == 0) {

		for(int digit : comb) cout << digit << " ";
		cout << endl;
		return;
	}

	// recursion case

	// generate combinatations of 'c' that sums up to 't'

	// decide the next candidate
	
	for(int j=i; j<c.size(); j++) {
		// can you use the jth option ?
		if(c[j] <= t) {
			// use the jth option
			comb.push_back(c[j]);
			generateCombinations(t-c[j], c, comb, j); // pass j+1 if you don't want to use a candidate unlimited num. of times
			comb.pop_back(); // back-tracking
		}
	}


}

int main() {

	vector<int> c = {2, 3, 5, 7};
	int t = 7;

	vector<int> comb; // to track the combination that sums up to 't'

	generateCombinations(t, c, comb, 0);
	
	return 0;
}