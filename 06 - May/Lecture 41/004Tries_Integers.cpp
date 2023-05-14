/*

Implementation of the TRIE data structure to store non-negative integers.

Assume integer has 32-bit representation.

*/

#include<iostream>

using namespace std;

class node {

public:
	
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	
	node() {
		this->left = NULL;
		this->right= NULL;
	}
};


class trie {
	
	node* root;

	public :

		trie() {
			root = new node();
		}

		void insert(int n) {
			node* temp = root;
			for(int i=0; i<32; i++) {
				int ith_bit = (n>>i)&1;
				if(ith_bit == 1) {
					if(temp->right == NULL) {
						temp->right = new node();
					}
					temp = temp->right;
				} else {
					if(temp->left == NULL) {
						temp->left = new node();
					}
					temp = temp->left;
				}
			}
		}

		bool search(int n) {
			node* temp = root;
			for(int i=0; i<32; i++) {
				int ith_bit = (n>>i)&1;
				if(ith_bit == 1) {
					if(temp->right == NULL) {
						return false;
					}
					temp = temp->right;
				} else {
					if(temp->left == NULL) {
						return false;
					}
					temp = temp->left;
				}
			}

			return true;
		}
};

int main() {

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	trie t;
	for(int i=0; i<n; i++) {
		t.insert(arr[i]);
	}

	int brr[] = {1, 2, 5, 10, 25, 0};
	int m = sizeof(brr) / sizeof(int);

	for(int i=0; i<m; i++) {
    	t.search(brr[i]) ? cout << brr[i] << " is present" << endl :
    	                   cout << brr[i] << " is absent" << endl;
    }

    cout << endl;

	return 0;
}