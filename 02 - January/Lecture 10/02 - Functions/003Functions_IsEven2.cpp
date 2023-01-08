#include<iostream>

using namespace std;

bool isEven(int n) {

	return n%2 == 0;

}

int main() {

	// bool answer = isEven(4);

	// cout << answer << endl;

	// cout << isEven(4) << endl;
	// cout << isEven(5) << endl;

	// a function that returns a value can be treated as an expression 
	
	bool answer = isEven(5);

	// if(answer == 1) {
	// 	cout << "true" << endl;
	// } else {
	// 	cout << "false" << endl;
	// }

	// if(answer) {
	// 	cout << "true" << endl;
	// } else {
	// 	cout << "false" << endl;
	// }

	if(isEven(5)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}


	isEven(5) ? cout << "true" << endl :
	            cout << "false" << endl;


	return 0;
}