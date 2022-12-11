#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "enter a positive integer : ";
	cin >> n;

	int i=1; // loop variable
	while(i <= n) {
		cout <<  i << " ";
		i = i+1;
	}
	cout << "you are outside the body of while-loop" << endl;

	return 0;
}