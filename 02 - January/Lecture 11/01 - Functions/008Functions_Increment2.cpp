#include<iostream>

using namespace std;

void inc(int& x) {
	cout << "inside inc() before ++ x = " << x << endl;

	x++;

	cout << "inside inc() after ++ x = " << x << endl;

}

int main() {

	int x = 10;

	cout << "inside main() before inc() x = " << x << endl;

	inc(x);

	cout << "inside main() after inc() x = " << x << endl;

	return 0;
}