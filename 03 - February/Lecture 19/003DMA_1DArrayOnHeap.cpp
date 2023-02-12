#include<iostream>

using namespace std;

int main() {

	// allocate memory for a 1D array on the heap memory
	int* ptr = new int[5];

	// access elements of the 1D array

	// *(ptr+0) = 0;
	// *(ptr+1) = 1;
	// *(ptr+2) = 2;
	// *(ptr+3) = 3;
	// *(ptr+4) = 4;

	for(int i=0; i<5; i++) {
		// *(ptr+i) = i;
		ptr[i] = i;
	}

	for(int i=0; i<5; i++) {
		// cout << *(ptr+i) << " ";
		cout << ptr[i] << " ";
	}

	cout << endl;

	// deallocate memory for 1D array

	delete [] ptr;

	return 0;
}