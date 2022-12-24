#include<iostream>

using namespace std;

int main() {

	int x = 0; // to track the net movement along the x-axis
	int y = 0; // to track the net movement along the y-axis

	char ch;

	while(true) {

		ch = cin.get();
		if(ch == '\n') {
			break;
		}

		if(ch == 'E') {
			x++;
		} else if(ch == 'W') {
			x--;
		} else if(ch == 'N') {
			y++;
		} else { // ch == 'S'
			y--;
		}

	}

	// cout << "(" << x << ", " << y << ")" << endl;

	if(x >= 0 and y >= 0) {

		// destination coordinate is in the first quadrant


		// print 'E' x times
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// print 'N' y times
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}


	} else if(x < 0 and y >= 0) {

		// destination coordinate is in the second quadrant

		// print 'N' y times
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}

		// print 'W' -x times
		for(int i=1; i<=-x; i++) {
			cout << 'W';
		}


	
	} else if(x < 0 and y < 0) {

		// destination coordinate is in the third quadrant

		// print 'S' -y times
		for(int i=1; i<=-y; i++) {
			cout << 'S';
		}

		// print 'W' -x times
		for(int i=1; i<=-x; i++) {
			cout << 'W';
		}

	} else {

		// destination coordinate is in the fourth quadrant

		// print 'E' x times
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// print 'S' -y times
		for(int i=1; i<=-y; i++) {
			cout << 'S';
		}
	}
	
	return 0;
}