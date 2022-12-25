#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 3;

	// if((n>>k)&1 == 1) {
	// 	// kth bit is set
	// 	cout << "true" << endl;
	// }  else {
	// 	// kth bit is not set
	// 	cout << "false" << endl;
	// }

	// if((n>>k)&1) {
	// 	// kth bit is set
	// 	cout << "true" << endl;
	// }  else {
	// 	// kth bit is not set
	// 	cout << "false" << endl;
	// }

	(n>>k)&1 ? cout << "true" << endl : cout << "false" << endl;
	
	(1<<k)&n ? cout << "true" << endl : cout << "false" << endl;
	
	return 0;
}