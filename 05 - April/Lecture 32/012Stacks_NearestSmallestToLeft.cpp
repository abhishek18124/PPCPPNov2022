#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int arr[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(arr) / sizeof(int);

	stack<pair<int, int>> s; // first : idx , second : val

	vector<int> nearest_smaller_to_the_left;

	for(int i=0; i<n; i++) {

		// find the nearest smaller element to the left of arr[i]

		while(!s.empty() && s.top().second >= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			// cout << -1 << " ";
			nearest_smaller_to_the_left.push_back(-1);
		} else {
			// cout << s.top().first << " ";
			nearest_smaller_to_the_left.push_back(s.top().first);
		}

		s.push({i, arr[i]}); // s.push(make_pair(i, arr[i]))

	}

	for(int i=0; i<nearest_smaller_to_the_left.size(); i++) {
		cout << nearest_smaller_to_the_left[i] << " ";
	}

	cout << endl;


	return 0;
}