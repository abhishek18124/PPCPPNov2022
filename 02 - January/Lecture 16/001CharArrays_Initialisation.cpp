#include<iostream>

using namespace std;

int main() {

	char str[5] = {'a', 'b', 'c', 'd', 'e'};

	// for(int i=0; i<5; i++) {
	// 	cout << str[i] << " ";
	// }

	// cout << endl;

	cout << str << endl;

	char str2[6] = {'a', 'b', 'c', 'd', 'e', '\0'};

	cout << str2 << endl;	

	char str3[] = "coding blocks"; // '\0' is added automatically

	cout << str3 << endl;

	if(str3[13] == '\0') {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	return 0;	
	
}