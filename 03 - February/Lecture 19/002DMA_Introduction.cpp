#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;

	*ptr = 100;

	cout << *ptr << endl;

	delete ptr;

	ptr = new int;

	*ptr = 200;

	cout << *ptr << endl;

	delete ptr;

	double* dptr = new double;

	*dptr = 3.14;

	cout << *dptr << endl;

	ptr = new int(300);

	cout << *ptr << endl;

	return 0;
}