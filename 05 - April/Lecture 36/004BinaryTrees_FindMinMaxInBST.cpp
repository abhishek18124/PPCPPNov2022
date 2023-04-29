/*

	Given a BST, design an algorithm to find the minimum and the maximum value inside it.

*/

#include<iostream>

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

TreeNode* findMinimum(TreeNode* root) {

	if(root == NULL) {
		// tree is empty
		return NULL;
	}

	TreeNode* temp = root;
	while(temp->left != NULL) {
		temp = temp->left;
	}

	return temp;

}

TreeNode* findMaximum(TreeNode* root) {

	if(root == NULL) {
		// tree is empty
		return NULL;
	}

	TreeNode* temp = root;
	while(temp->right != NULL) {
		temp = temp->right;
	}

	return temp;

}


int main() {
	TreeNode* root = new TreeNode(10);
	
	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);
	root->left->left->right = new TreeNode(4);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);
	root->right->right->left = new TreeNode(16);

	TreeNode* minTreeNode = findMinimum(root);
	TreeNode* maxTreeNode = findMaximum(root);

	minTreeNode != NULL? cout << "minimum val : " << minTreeNode->val << endl :
	          cout << "tree is empty!" << endl;

	maxTreeNode ? cout << "maximum val : " << maxTreeNode->val << endl :
	          cout << "tree is empty!" << endl; 
	
	return 0;
}