#include<iostream>
#include<algorithm>

using namespace std;

bool isGoodString(string str) {

	for(int i=0; str[i] != '\0'; i++) {
		if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
			// ith char is a consonant
			return false;
		}
	}
	return true;

}

int main() {

	string str = "uoiea";
	
	isGoodString(str) ? cout << "true" << endl :
	                    cout << "false" << endl;
	
	return 0;
}