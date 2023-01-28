// strlen <= 100 

#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the no. of strings : ";
	cin >> n;

	cin.ignore(); // ignores the character after n

	// cin.get();

	char inp[101]; // based on the contraints
	// cin >> inp;
	cin.getline(inp, 101, '\n');

	char lsf[101]; // largest so far
	strcpy(lsf, inp);

	for(int i=1; i<=n-1; i++) {
		// cin >> inp;
		cin.getline(inp, 101, '\n');
		if(strcmp(inp, lsf) > 0) {
			strcpy(lsf, inp);
		}
	}

	cout << lsf << endl;

	return 0;
}
