#include<iostream>

using namespace std;

int main() {

	// null pointers are equal

	int* p = nullptr;
	int* q = NULL;
	int* r = 0;

	if(p == r) {
		cout << "yes";
	}

	// you cannot derefernce a null pointers
	// cout << *p << endl;
	
	return 0;
}