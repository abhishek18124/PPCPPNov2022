#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(arr) / sizeof(int);

	stack<int> s;

	vector<int> nearest_greater_to_the_right;

	for(int i=n-1; i>=0; i--) {

		// find the next greater element for arr[i] or find the nearest greater element to the right of arr[i]

		while(!s.empty() && s.top() <= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			// cout << -1 << " ";
			nearest_greater_to_the_right.push_back(-1);
		} else {
			// cout << s.top() << " ";
			nearest_greater_to_the_right.push_back(s.top());
		}

		s.push(arr[i]);

	}

	reverse(nearest_greater_to_the_right.begin(), nearest_greater_to_the_right.end());

	for(int i=0; i<nearest_greater_to_the_right.size(); i++) {
		cout << nearest_greater_to_the_right[i] << " ";
	}

	cout << endl;nearest_greater_to_the_right

	return 0;
}