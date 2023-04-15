#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int arr[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(arr) / sizeof(int);

	stack<pair<int, int>> s; // first : idx , second : val

	vector<int> span;

	for(int i=0; i<n; i++) {

		// find the index of the nearest greater element to the left of arr[i]

		while(!s.empty() && s.top().second <= arr[i]) {
			s.pop();
		}

		int j;

		if(s.empty()) {
			j = -1;
		} else {
			j = s.top().first;
		}

		span.push_back(i-j);
		s.push({i, arr[i]});

	}

	for(int i=0; i<span.size(); i++) {
		cout << span[i] << " ";
	}

	cout << endl;

	return 0;
}