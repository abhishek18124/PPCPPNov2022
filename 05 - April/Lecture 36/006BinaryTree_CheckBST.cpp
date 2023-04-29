/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

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

int findMinimum(TreeNode* root) {

	if(root == NULL) {
		// tree is empty
		return INT_MAX;
	}

	TreeNode* temp = root;
	while(temp->left != NULL) {
		temp = temp->left;
	}

	return temp->val;

}

int findMaximum(TreeNode* root) {

	if(root == NULL) {
		// tree is empty
		return INT_MIN;
	}

	TreeNode* temp = root;
	while(temp->right != NULL) {
		temp = temp->right;
	}

	return temp->val;

}



// bool isBST(TreeNode* root)  {

// 	// base case
// 	if(root == NULL) {
// 		// tree is empty
// 		return true;
// 	}

// 	// recursive case

// 	// 1. check if the leftSubtree is a BST

// 	bool X = isBST(root->left);

// 	// 2. check if the rightSubtree is a BST\

// 	bool Y = isBST(root->right);

// 	// 3. check if the BST property is satisfied at the root

// 	bool Z = root->val > findMaximum(root->left) and root->val < findMinimum(root->right) ? true : false;

// 	return X && Y && Z;

// }

class Triple {
	public :

	bool bst;
	int min;
	int max;
};

Triple isBSTEffcient(TreeNode* root)  {

	Triple t;

	// base case
	if(root == NULL) {
		// tree is empty
		t.bst = true;
		t.min = INT_MAX;
		t.max = INT_MIN;
		return t;
	}

	// recursive case

	// 1. check if the leftSubtree is a BST and sim. cal. min and max. of the leftSubtree

	Triple tL = isBSTEffcient(root->left);

	// 2. check if the rightSubtree is a BST and sim. cal. min and max. of the rightSubtree

	Triple tR = isBSTEffcient(root->right);

	// 3. check if the BST property is satisfied at the root

	bool Z = root->val > tL.max and root->val < tR.min ? true : false;

	t.bst = tL.bst and tR.bst and Z;
	t.min = min({tL.min, tR.min, root->val});
	t.max = max({tR.max, tL.max, root->val});

	return t;

}

bool isBSTRange(TreeNode* root, long long lb, long long ub) {

	if(root == NULL) {
		// empty tree is a BST
		return true;
	}

	return isBSTRange(root->left, lb, root->val) and
	       isBSTRange(root->right, root->val, ub) and
	       root->val > lb and root->val < ub;

}

int main() {

	TreeNode* root = new TreeNode(10);
	
	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(1);

	// isBST(root) ? cout << "BST" << endl :
	//               cout << "Not a BST" << endl;


    Triple t = isBSTEffcient(root);
	t.bst ? cout << "BST" << endl :
	        cout << "Not a BST" << endl;

	long long lb = LLONG_MIN; // or (long long)INT_MIN-1;
	long long ub = LLONG_MAX; // or (long long)INT_MAX+1;

	isBSTRange(root, INT_MIN, INT_MAX) ? cout << "BST" << endl :
	                                     cout << "Not a BST" << endl;


	return 0;
}