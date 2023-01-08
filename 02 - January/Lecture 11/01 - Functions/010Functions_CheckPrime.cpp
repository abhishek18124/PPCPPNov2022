#include<iostream>
#include<cmath>

using namespace std;

// bool isPrime(int n) {

// 	for(int i=2; i<=n-1; i++) {
// 		if(n%i == 0) {
// 			// 'i' is a factor of 'n' in the range [2, n-1]
// 			return false;
// 		}
// 	}

// 	return true; // 'n' is a prime, we couldn't find any factor of 'n' in the range [2, n-1]

// }


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

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	isPrime(n) ? cout << n << " is prime" << endl :
	             cout << n << " is not prime" << endl;

	// if(isPrime(n)) {
	// 	cout <<  n << " is prime" << endl;
	// } else {
	// 	cout << n << " is not prime" << endl;
	// }

	return 0;
}