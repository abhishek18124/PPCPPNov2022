#include<iostream>
#include<algorithm>

using namespace std;

int main() {	

	int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n = sizeof(height)/sizeof(int);

	int lsf = 0;

	int i = 0;
	int j = n-1;

	while(i < j) {

		// compute the area using the ith line and jth line

		int w =  j-i;
		int h = min(height[i], height[j]);
		int a = w*h;

		if(a > lsf) {
			lsf = a;
		}

		if(height[i] < height[j]) {
			i++;
		} else {
			j--;
		}

	}

	cout << lsf << endl;

	return 0;
}