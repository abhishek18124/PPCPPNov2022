#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int lsf = INT_MIN; // to track the "largest so far"

	int i = 1;
	int x; // to read integer values from the user

	while(i <= n) {
		cin >> x;
		if(x > lsf) {
			lsf = x;
		}
		i = i+1;
	}

	cout << "largest of " << n << " numbers is " << lsf << endl;
	
	return 0;
}