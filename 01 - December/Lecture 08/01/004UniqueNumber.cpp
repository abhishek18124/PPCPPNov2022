#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int no;
	int ans = 0; // to store the unique number

	for(int i=0; i<n; i++) {
		cin >> no;
		ans ^= no; // ans = ans^no;
	}

	cout << ans << endl;
	
	return 0;
}