#include<iostream>

using namespace std;

void myswap(int& x, int& y) {

	int temp = x;
	x = y;
	y = temp;

}

int main() {

	int a = 10;
	int b = 20;

	cout << "before swap, a = " << a << endl;
	cout << "before swap, b = " << b << endl;

	myswap(a, b);

	cout << "after swap, a = " << a << endl;
	cout << "after swap, b = " << b << endl;

	return 0;
}