#include<iostream>

using namespace std;

int main() {

	char ch = 100; // implicit type-casting

	cout << ch << endl;

	// char ch_2;

	// cin >> ch_2;

	// cout << ch_2;

	char ch_3 = 'A';

	cout << ch_3 << endl;

	cout << (int)ch_3 << endl; // explicit type-casting

	char ch_4 = '3';

	cout << (int)ch_4 << endl;

	int x = ch_4 - '0';

	cout << x << endl;

	return 0;
}