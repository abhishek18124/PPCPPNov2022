#include<iostream>
#include<vector>

using namespace std;

template <typename T>
class stack {

	vector<T> v;

	public : 

		void push(T data) {
			v.push_back(data);
		}

		void pop() {
			if(v.size() == 0) {
				// stack is empty
				return;
			}
			v.pop_back();
		}

		int size() {
			return v.size();
		}

		T top() {
			return v.back(); // or v[v.size()-1]
		}

		bool empty() {
			return v.empty();
		}

};

int main() {

	stack<int> s;

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

    s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}