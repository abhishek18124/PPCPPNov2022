#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	// // implementation 1 : uses the 'flag' variable

	// int i = 2; 
	// bool flag = true; // assume 'n' is prime

	// while(i <= n-1) {

	// 	// check if 'i' is a factor of 'n' 
	// 	if(n%i == 0) {
	// 		// you've found a factor of 'n' in the range [2, n-1] therefore 'n' is not a prime no.
	// 		flag = false;
	// 		cout << n << " is not prime" << endl;
	// 		break;
	// 	}

	// 	i = i+1;

	// }

	// if(flag == true) {
	// 	cout << n << " is prime" << endl;
	// }

	// // implementation 1 : without the 'flag' variable

	// int i = 2; 
	
	// while(i <= n-1) {

	// 	// check if 'i' is a factor of 'n' 
	// 	if(n%i == 0) {
	// 		// you've found a factor of 'n' in the range [2, n-1] therefore 'n' is not a prime no.
	// 		cout << n << " is not prime" << endl;
	// 		break;
	// 	}

	// 	i = i+1;

	// }

	// if(i == n) {
	// 	cout << n << " is prime" << endl;
	// }

	// implementation 3 : without the 'flag' variable and using sqrt

	int i = 2; 
	int square_root_of_n = sqrt(n);
	
	while(i <= square_root_of_n) {

		// check if 'i' is a factor of 'n' 
		if(n%i == 0) {
			// you've found a factor of 'n' in the range [2, n-1] therefore 'n' is not a prime no.
			cout << n << " is not prime" << endl;
			break;
		}

		i = i+1;

	}

	if(i > square_root_of_n) {
		cout << n << " is prime" << endl;
	}

		
	return 0;
}