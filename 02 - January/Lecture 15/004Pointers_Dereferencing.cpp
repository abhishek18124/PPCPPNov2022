#include<iostream>

using namespace std;

int main() {

	int x = 516;
	int *xptr = &x;
	
	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl;
	cout << "*xptr = " << *xptr << endl;

	char* chptr = (char*)&x;
	cout << "*chptr = " << (int)*chptr << endl; 

	// double* dptr = (double*)&x;
	// cout << "dptr = " << dptr << endl;
	// cout << "sizeof(dptr) = " << sizeof(dptr) << endl;
	// cout << "*dptr = " << *dptr << endl;

	
	return 0;
}