#include<iostream>

using namespace std;

bool used[10] = {false}; // to track the digits used in the construction of the  
                         // smallest number corresponding to the given pattern.

bool flag = false; // 'num' not yet found

void construct(string pattern, string& num, int i) {

	// base case

	if(i == pattern.size()) { // num.size() == pattern.size()+1
		flag = true; // you've found the lexicographically smallest 'num'
		cout << num << endl;
		return;
	}

	// recursive case

	if(num.size() == 0) {
		// decide the first digit
		for(int j=1; j<=9; j++) {
			used[j] = true;
			num.push_back(j+'0');
			construct(pattern, num, i);

			if(flag == true) return;

			used[j] = false;
			num.pop_back();
		}

		return;
	}


	// decide what will be the next digit in 'num'

	int p = num.back()-'0'; // last digit 
		
	if(pattern[i] == 'I') {
		for(int j=p+1; j<=9; j++) {
			if(used[j] == false) {
				used[j] = true;
				num.push_back(j+'0');
				construct(pattern, num, i+1);

				if(flag == true) return;

				used[j] = false;
				num.pop_back(); // back-tracking
			}
		}
	} else { // pattern[i] = 'D'
		for(int j=1; j<=p-1; j++) {
			if(used[j] == false) {
				used[j] = true;
				num.push_back(j+'0');
				construct(pattern, num, i+1);

				if(flag == true) return;

				used[j] = false; 
				num.pop_back(); // back-tracking
			}
		}

	}
}

int main() {

	string pattern = "DDD";
	string num = "";

	construct(pattern, num, 0);

	return 0;
}