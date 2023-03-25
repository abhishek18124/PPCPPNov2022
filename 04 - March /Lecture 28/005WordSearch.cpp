#include<iostream>
#include<vector>

using namespace std;

bool searchWord(vector<vector<char>>& board, string word, int m, int n, int i, int j, int k) {
        
    // base case

    if(k == word.size()) {
		// word is found
		return true;
	}

	if(i == -1 or i == m or j == -1 or j == n) {
		return false;
	}

	if(board[i][j] != word[k]) {
		return false;
	}

    // recursive case
   
   	board[i][j] = '#'; // block the cell to ensure it is used only once

   	// cout << i << " " << j << " " << k << endl;

   	// decide the next step

   	// // 1. move left
   	// bool A = searchWord(board, word, m, n, i, j-1, k+1);

   	// // 2. move right
   	// bool B = searchWord(board, word, m, n, i, j+1, k+1);

   	// // 3. move up
   	// bool C = searchWord(board, word, m, n, i-1, j, k+1);

   	// // 4. move down
   	// bool D = searchWord(board, word, m, n, i+1, j, k+1);

   	// return A or B or C or D;

   	int dx[] = {0, 0, -1, 1};
   	int dy[] = {-1, 1, 0, 0};

   	for(int l=0; l<4; l++) {
   		if(searchWord(board, word, m, n, i+dx[l], j+dy[l], k+1)) {
   			return true;
   		}
   	}

   	board[i][j] = word[k]; // back-track

   	return false;

}

bool exist(vector<vector<char>>& board, string word) {
	int m = board.size();
	int n = board[0].size();
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(board[i][j] == word[0]) {
				if(searchWord(board, word, m, n, i, j, 0)) {
					return true;
				}
			}
		}
	}

	return false;
}

	
int main() {

	vector<vector<char>> board = {{'A','B','C','E'},
	                              {'S','F','C','S'},
	                              {'A','D','E','E'}};

	string word = "ABCCED";

	exist(board, word) ? cout << "true" << endl :
	                     cout << "false" << endl;

	return 0;
}