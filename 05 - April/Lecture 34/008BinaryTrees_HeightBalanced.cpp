
/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

*/

#include<iostream>
#include<cmath>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};


TreeNode* buildTree() {

	int val;
	cin >> val;

	// base case

	if(val == -1) {
		// construct an empty tree and return pointer to its root TreeNode
		return NULL;
	}

	// recursive case

	// 1. construct the root val using the first value of the given preOrder traversal

	TreeNode* root = new TreeNode(val);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}

int computeHeight(TreeNode* root) {

	// base case
	if(!root) { // root == NULL
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

bool checkHeightBalanced(TreeNode* root) {

	// base case
	if(!root) { // root == NULL
		// tree is empty
		return true;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtee is heightBalanced
	bool X = checkHeightBalanced(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced
	bool Y = checkHeightBalanced(root->right);

	// 3. check if the root node is heightBalanced
	bool Z = abs(computeHeight(root->left)-computeHeight(root->right)) <= 1 ? true : false;

	return X && Y && Z;

}

class Pair {
	public :

	bool isHeightBalanced;
	int height;
};

Pair checkHeightBalancedEfficient(TreeNode* root) {

	Pair p;

	// base case
	if(!root) { // root == NULL
		// tree is empty
		p.isHeightBalanced  = true;
		p.height = -1;
		return p;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtee is heightBalanced and simultaneously compute the height of the leftSubtree
    Pair pL = checkHeightBalancedEfficient(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced and simultaneously compute the height of the rightSubtree
	Pair pR = checkHeightBalancedEfficient(root->right);

	// 3. check if the root node is heightBalanced
	bool Z = abs(pL.height-pR.height) <= 1 ? true : false;

	p.isHeightBalanced =  pL.isHeightBalanced && pR.isHeightBalanced && Z;
	p.height = 1 + max(pL.height, pR.height);

	return p;
}


int main() {

	TreeNode* root = buildTree();

	checkHeightBalanced(root) ? cout << "height-balanced!" << endl :
	                            cout << "not height-balanced" << endl;

	checkHeightBalancedEfficient(root).isHeightBalanced ? cout << "height-balanced!" << endl :
                                                          cout << "not height-balanced" << endl;


	return 0;
}