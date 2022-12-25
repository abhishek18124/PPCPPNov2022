#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int a = 25;
	int b = 19;

	cout << "a&b : " << (a&b) << endl;
	cout << "a|b : " << (a|b) << endl;
	cout << "a^b : " << (a^b) << endl;
	cout << "~a  : " << (~a)  << endl;

	cout << bitset<32>(a) << endl;
	cout << bitset<32>(~a) << endl;

	int c = 3;

	cout << "c<<1 : " << (c<<1) << endl;
	cout << "c<<2 : " << (c<<2) << endl;
	cout << "c<<3 : " << (c<<3) << endl;

	c = c<<5;

	cout << "c : " << c << endl;

	int d = 8;

	cout << "d>>1 : " << (d>>1) << endl;
	cout << "d>>2 : " << (d>>2) << endl;
	cout << "d>>3 : " << (d>>3) << endl;   

	return 0;
}