// n <= 50 and m <= 50

#include<iostream>
#include<cstring>

using namespace std;

void concatenate(char* str1, char* str2) {

	int i = strlen(str1); // to iterate over str1
	int j = 0; // to iterate over str2

	// while(j <= strlen(str2)) {
	// 	str1[i] = str2[j];
	// 	i++;
	// 	j++;
	// }

	while(str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}

	str1[i] = '\0';

}



int main() {

	char str1[101] = "abcd";
	char str2[] = "def";

	cout << "Before concat : " << str1 << endl;

	// concatenate(str1, str2);
	strcat(str1, str2);

	cout << "After concat : " << str1 << endl;

	return 0;
}