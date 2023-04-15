#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {2, 5, 1, 3, 6, 4, 0};
	int n = sizeof(arr) / sizeof(int);

	stack<pair<int, int>> s; // first : idx , second : val

	vector<int> nearest_smaller_to_the_right;

	for(int i=n-1; i>=0; i--) {

		// find the nearest smaller element to the right of arr[i]

		while(!s.empty() && s.top().second >= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			// cout << -1 << " ";
			nearest_smaller_to_the_right.push_back(n);
		} else {
			// cout << s.top().first << " ";
			nearest_smaller_to_the_right.push_back(s.top().first);
		}

		s.push({i, arr[i]}); // s.push(make_pair(i, arr[i]))

	}

	reverse(nearest_smaller_to_the_right.begin(), nearest_smaller_to_the_right.end());

	for(int i=0; i<nearest_smaller_to_the_right.size(); i++) {
		cout << nearest_smaller_to_the_right[i] << " ";
	}

	cout << endl;

	return 0;
}