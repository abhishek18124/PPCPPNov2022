#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int); // isPrime ki declaration / prototype

void printPrimes(int m) {

	for(int n=2; n<=m; n++) {
		// check if 'n' is a prime no. of not
		if(isPrime(n)) {
			// n is a prime no.
			cout << n << " ";
		}
	}

}

bool isPrime(int n) {

	int rn = sqrt(n);
	for(int i=2; i<=rn; i++) {
		if(n%i == 0) {
			// 'i' is a factor of 'n' in the range [2, rn]
			return false;
		}
	}

	return true; // 'n' is a prime, we couldn't find any factor of 'n' in the range [2, rn]

}

int main() {

	int m;
	cout << "Enter the value of m : ";
	cin >> m;

	printPrimes(m);
	
	return 0;
}