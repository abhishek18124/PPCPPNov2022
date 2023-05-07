#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 4, 5, 6};

	unordered_map<int, int> freqMap;

	for(int i=0; i<v.size(); i++) {
		freqMap[v[i]]++;
	}

	// for(pair<int, int> p : freqMap) {
	// 	cout << p.first << " " << p.second << endl;
	// }

	bool flag = false; // assume no duplicates found

	for(pair<int, int> p : freqMap) {
		if(p.second > 1) {
			// p.first is a duplicate key
			cout << p.first << " ";
			flag = true;
			// break;
		}
	}

	if(flag) {
		cout << "duplicate found" << endl;
	} else {
		cout << "duplicate not present" << endl;
	}

	unordered_set<int> hashSet;

	flag = false; // assume duplicate not present

	for(int i=0; i<v.size(); i++) {
		if(hashSet.find(v[i]) != hashSet.end()) {
			// you've found a duplicate
			flag = true;
			break;
		}
		hashSet.insert(v[i]);
	}


	if(flag) {
		cout << "duplicate found" << endl;
	} else {
		cout << "duplicate not present" << endl;
	}
	
	return 0;
}