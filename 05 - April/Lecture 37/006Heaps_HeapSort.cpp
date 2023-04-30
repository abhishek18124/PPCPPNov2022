/*

	Given an array of n integers, sort the array using heap sort algorithm.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int n, int i) {

		int maxIdx = i;

		int leftIdx = 2*i + 1;
		if(leftIdx < n and v[leftIdx] > v[maxIdx]) {
			maxIdx = leftIdx;
		}

		int rightIdx= 2*i + 2;
		if(rightIdx < n and v[rightIdx] > v[maxIdx]) {
			maxIdx = rightIdx;
		}

		if(maxIdx != i) {
			swap(v[i], v[maxIdx]);
			heapify(v, n, maxIdx);
		}

	}


int main() {
	
	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};

	// 1. convert the input arr[] into a maxHeap : O(n)

	int n = v.size();

	for(int i=v.size()-1; i>=0; i--) {
		heapify(v, n, i);
	}

	int heapsize = v.size();

	// time : O(n*logn)

	while(heapsize >= 1) {
		swap(v[0], v[heapsize-1]);
		heapsize--;
		heapify(v, heapsize, 0);
	}

	// total time : O(n + n.logn) = O(n.logn)

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	// space : O(logn) due to function call used in heapify [we are not considering input space]

	cout << endl;
	
	return 0;
}
