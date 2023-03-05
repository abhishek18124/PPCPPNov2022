#include<iostream>

using namespace std;

int f(string str, int n) {

	// base case
	if(n == 0) { // str == "" or str.empty()
		return 0;
	}


	// recursive case

	string subString = str.substr(0, n-1);

	// ask your friend to convert subString into integer
	int A = f(subString, n-1);

	return A*10 + str[n-1]-'0';

}

int main() {

	string str = "1234";
	int n = str.size();

	int res = f(str, n);

	cout << res << endl;
	cout << res+1 << endl;

	return 0;
}