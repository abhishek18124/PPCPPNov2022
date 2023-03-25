/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> count the number of paths that exist between src and dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output : 3
	
*/

#include<iostream>

using namespace std;

// int cnt; // to store the count of the paths [global variable is by default init. with 0]

// bool checkPath(char maze[][10], int m, int n, int i, int j) {

// 	// base case

// 	if(i == m-1 and j == n-1) {
// 		// you've reached the destination
// 		if(maze[i][j] == 'X') {
// 			// destination is blocked, you cannot go there
// 			return false;
// 		}

// 		cnt++;
// 		return true;
// 	}

// 	if(maze[i][j] == 'X') {
// 		// you cannot go from a blocked cell to the destination
// 		return false;
// 	}

// 	// recursive case

// 	// we've to take a decision

// 	if(i == m-1) {
// 		// you've to move right
// 		return checkPath(maze, m, n, i, j+1);
// 	}

// 	if(j == n-1) {
// 		// you've to move down
// 		return checkPath(maze, m, n, i+1, j);
// 	}

// 	// // 1. move right
// 	// bool X = checkPath(maze, m, n, i, j+1);

// 	// // 2. move down
// 	// bool Y = checkPath(maze, m, n, i+1, j);

// 	// return X or Y;

// 	return checkPath(maze, n, n, i, j+1) or checkPath(maze, m, n, i+1, j);

// }

// int countPaths(char maze[][10], int m, int n, int i, int j) {

// 	// base case

// 	if(i == m-1 and j == n-1) {
// 		// you've reached the  destination  cell
// 		if(maze[i][j] == 'X') {
// 			// destination is blocked
// 			return 0;
// 		}
// 		return 1;
// 	}

// 	if(maze[i][j] == 'X') {
// 		// path doesn't exist
// 		return 0;
// 	}

// 	// recursive case

// 	if(i == m-1) {
// 		return countPaths(maze, m, n, i, j+1);
// 	}

// 	if(j == n-1) {
// 		return countPaths(maze, m, n, i+1, j);
// 	}

// 	return countPaths(maze, m, n, i, j+1) + countPaths(maze, m, n, i+1, j);

// }


int countPaths(char maze[][10], int m, int n, int i, int j) {

	// base case

	if(i == m or j == n) {
		// you've gone outside the grid
		return 0;
	}

	if(i == m-1 and j == n-1) {
		// you've reached the  destination  cell
		if(maze[i][j] == 'X') {
			// destination is blocked
			return 0;
		}
		return 1;
	}

	if(maze[i][j] == 'X') {
		// path doesn't exist
		return 0;
	}

	// recursive case

	return countPaths(maze, m, n, i, j+1) + countPaths(maze, m, n, i+1, j);

}

int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X00"};
	int m = 4;
	int n = 4;

	// checkPath(maze, m, n, 0, 0) ? cout << "path exists" << endl :
	//                               cout << "path doesn't  exist" << endl;

	// cout << cnt << endl;

	cout << countPaths(maze, m, n, 0, 0) << endl;

	return 0;
}