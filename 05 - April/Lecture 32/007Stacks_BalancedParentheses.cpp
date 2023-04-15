#include<iostream>
#include<stack>

using namespace std;

bool isBalanced(string str) {
	stack<char> s;
	for(char ch : str) {
		switch(ch) {

			case '(' : s.push(ch); break; 
			case '[' : s.push(ch); break;
			case '{' : s.push(ch); break;
			case ')' : if(s.empty() or s.top() != '(') return false; else s.pop(); break;
			case ']' : if(s.empty() or s.top() != '[') return false; else s.pop(); break;
			case '}' : if(s.empty() or s.top() != '{') return false; else s.pop(); break;

		}
	}

	return s.empty();


}

int main() {

	string str = "([][]()}";

	isBalanced(str) ? cout << "balanced!" << endl :
	                  cout << "not balanced!" << endl;

	return 0;
}