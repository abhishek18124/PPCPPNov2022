#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	stack<int> s; // or stack<int, vector<int>> or stack<int, list<int>>

	s.push(10);
	s.push(20);
	s.push(30);

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();
	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "empty : " << s.empty() << endl;

	// stack<vector<int>> s1;

	// s1.push({10, 20, 30});
	// s1.push({40, 50});

	return 0;

}