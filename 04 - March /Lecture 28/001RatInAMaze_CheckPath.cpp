/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> check if there exists a path from src to dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output :

		true (Yes, a path exist from src to dst)

*/

#include<iostream>

using namespace std;

bool checkPath(char maze[][10], int m, int n, int i, int j) {

	// base case

	if(i == m-1 and j == n-1) {
		// you've reached the destination
		if(maze[i][j] == 'X') {
			// destination is blocked, you cannot go there
			return false;
		}
		return true;
	}

	if(maze[i][j] == 'X') {
		// you cannot go from a blocked cell to the destination
		return false;
	}

	// recursive case

	// we've to take a decision

	if(i == m-1) {
		// you've to move right
		return checkPath(maze, m, n, i, j+1);
	}

	if(j == n-1) {
		// you've to move down
		return checkPath(maze, m, n, i+1, j);
	}

	// 1. move right
	bool X = checkPath(maze, m, n, i, j+1);

	// 2. move down
	bool Y = checkPath(maze, m, n, i+1, j);

	return X or Y;

}

int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X0X"};
	int m = 4;
	int n = 4;

	checkPath(maze, m, n, 0, 0) ? cout << "path exists" << endl :
	                              cout << "path doesn't  exist" << endl;

	return 0;
}