// constraints : m <= 99

#include<iostream>

using namespace std;

int main() {

	int sieve[100];
	
	int m;
	cout << "Enter the value of m : ";
	cin >> m;

	// initialise the sieve with the value 1

	for(int i=0; i<=m; i++) {
		sieve[i] = 1;
	}

	sieve[0] = 0;
	sieve[1] = 0;

	// for(int i=2; i<=m; i++) {
	// 	if(sieve[i] == 1) {
	// 		// i is a prime no. therefore, cancel out all of its multiples starting with 2*i
	// 		for(int j=2*i; j<=m; j=j+i) {
	// 			sieve[j] = 0;
	// 		}
	// 	}
	// }

	for(int i=2; i*i<=m; i++) {
		if(sieve[i] == 1) {
			// i is a prime no. therefore, cancel out all of its multiples starting with 2*i
			for(int j=i*i; j<=m; j=j+i) {
				sieve[j] = 0;
			}
		}
	}


	for(int i=2; i<=m; i++) {
		if(sieve[i] == 1) {
			// i is a prime no.
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}