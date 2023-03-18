/*

Given a phone keypad as shown below, and an n digit number, print all words which are possible by 
pressing the n digits on the keypad.

 1()     2(abc) 3(def) 
 4(ghi)  5(jkl) 6(mno)
 7(pqrs) 8(tuv) 9(wxyz)

*/

#include<iostream>

using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generateWords(char* inp, char* out, int i, int j) {

    // base case
    if(inp[i] == '\0') {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // recursive case

    // decide for the ith digit which character it is mapped to 

    int d = inp[i]-'0';

    if(d == 0 || d == 1) {
        // skip the ith digit
        generateWords(inp, out, i+1, j);
        return;
    }

    string options = keypad[d];
    for(int k=0; k<options.size(); k++) {
        char c_k = options[k];
        out[j] = c_k;
        generateWords(inp, out, i+1, j+1);
    }
}

int main() {
	
    char inp[] = "1203";
    char out[10];

    generateWords(inp, out, 0, 0);

	return 0;
}