// n <= 100

#include<iostream>

using namespace std;

void readString(char* str, char dlim='\n') {

	char ch;
	int i=0;

	while(true) {
		ch = cin.get();
		if(ch == dlim) { // '\n' is the de-limiting character
			break;
		}
		str[i] = ch;
		i++;
	}

	str[i] = '\0';

}

int main() {

	char str[101];

	cout << "Enter a string : ";
	
	// cin >> str; // cin will stop reading input as soon as it encounters a white-space character

	// readString(str, '$');

	cin.getline(str, 5, '$'); // delimiting char. is by default '\n'

	cout << "You've entered : " << str << endl;

	return 0;
}