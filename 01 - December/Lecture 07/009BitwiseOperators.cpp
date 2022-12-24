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

	return 0;
}