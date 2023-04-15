#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int arr[] = {5, 2, 0, 4, 1, 3, 6};
	int n = sizeof(arr) / sizeof(int);

	stack<int> s;

	vector<int> nearest_greater_to_the_left;

	for(int i=0; i<n; i++) {

		// find the nearest greater element to the left of arr[i]

		while(!s.empty() && s.top() <= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			// cout << -1 << " ";
			nearest_greater_to_the_left.push_back(-1);
		} else {
			// cout << s.top() << " ";
			nearest_greater_to_the_left.push_back(s.top());
		}

		s.push(arr[i]);

	}

	for(int i=0; i<nearest_greater_to_the_left.size(); i++) {
		cout << nearest_greater_to_the_left[i] << " ";
	}

	cout << endl;

	return 0;
}