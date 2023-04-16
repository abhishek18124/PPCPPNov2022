#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	for(int i=0; i<n; i++) {
		cout << h[i] << " ";
	}

	cout << endl;

	vector<int> nearest_smaller_to_left;
	stack<pair<int, int>> s; // first : idx second : val

	for(int i=0; i<n; i++) {

		while(!s.empty() and s.top().second >= h[i]) {
			s.pop();
		}

		if(s.empty()) {
			nearest_smaller_to_left.push_back(-1);
		} else {
			nearest_smaller_to_left.push_back(s.top().first);
		}

		s.push({i, h[i]});

	}

	for(int i=0; i<nearest_smaller_to_left.size(); i++) {
		cout << nearest_smaller_to_left[i] << " ";
	}

	cout << endl;

	vector<int> nearest_smaller_to_right;

	while(!s.empty()) {
		s.pop();
	}

	for(int i=n-1; i>=0; i--) {

		// find the idx of the nearest smaller element to the right of h[i]

		while(!s.empty() and s.top().second >= h[i]) {
			s.pop();
		}

		if(s.empty()) {
			// there is no smaller value to the right of h[i]
			nearest_smaller_to_right.push_back(n);
		} else {
			nearest_smaller_to_right.push_back(s.top().first);
		}

		s.push({i, h[i]});

	}

	reverse(nearest_smaller_to_right.begin(), nearest_smaller_to_right.end());

	for(int i=0; i<nearest_smaller_to_right.size(); i++) {
		cout << nearest_smaller_to_right[i] << " ";
	}

	cout << endl;

	int max_area = 0; // or INT_MIN; 

	for(int i=0; i<n; i++) {

		// compute the area of the largest rectangle which completely use the ith bar

		int w_i = nearest_smaller_to_right[i] - nearest_smaller_to_left[i] - 1;

		int a_i = w_i * h[i];

		max_area = max(max_area, a_i);

	}

	cout << max_area << endl;

	return 0;
}