#include<iostream>
#include<queue>

using namespace std;

int main() {


	char ch;
	queue<char> q;
	int freq[26] = {0};

	while(true) {

		cin >> ch;

		if(ch == '.') {
			break;
		}

		freq[ch-'a']++;
		if(freq[ch-'a'] == 1) {
			// ch is currrenly non-repeating therefore track it in the queue
			q.push(ch);
		}

		// find the first non-repeating character for 'ch' using the queue

		while(!q.empty() and freq[q.front()-'a'] > 1) {
			q.pop();
		}

		if(q.empty()) {
			cout << -1 << " ";
		} else {
			cout << q.front() << " ";
		}


	}
	

	return 0;
}