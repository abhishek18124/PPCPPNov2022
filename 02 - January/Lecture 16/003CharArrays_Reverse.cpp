#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "hello";
	int n = strlen(str);

	cout << "Original string : " << str << endl;

	int i = 0;
	int j = n-1;

	while(i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}

	cout << "Reversed  string after 1st reverse : " << str << endl; 

	reverse(str, str+n);

	cout << "Reversed  string after 2nd reverse : " << str << endl; 


	return 0;
}