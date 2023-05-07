#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 1};
	int k = 3;

	// time : O(n) space : O(n)

	unordered_map<int, int> indexMap; 
	bool flag = false; // assume no valid pair

	for(int i=0; i<v.size(); i++) {
		if(indexMap.find(v[i]) != indexMap.end()) {
			// you've seen the element with the value v[i] previously
			if(i-indexMap[v[i]] <= k) {
				flag = true;
				break;
			}
		}
		indexMap[v[i]] = i;
	}

	if(flag) {
		cout << "pair found" << endl;
	} else {
		cout << "no pair found" << endl;
	}
	
	return 0;
}