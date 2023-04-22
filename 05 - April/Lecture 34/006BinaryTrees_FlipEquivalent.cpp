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


void printPreOrder(TreeNode* root) {

	// base case
	if(!root) { // root == NULL
		cout << -1 << " ";
		return;
	}

	// recursive case

	// 1. process the root TreeNode
	cout << root->val << " ";

	// 2. do the preOrder traversal of the leftSubtree
	printPreOrder(root->left);

	// 3. do the preOrder traversal of the rightSubtree
	printPreOrder(root->right);

}

bool flipEquiv(TreeNode* root1, TreeNode* root2) {

	// base case

	if(root1 == NULL and root2 == NULL) {
		// tree1 is empty and tree2 is empty and empty trees are flip-equivalent
		return true;
	}

	if(root1 == NULL or root2 == NULL) {
		// either tree1 is non-empty or tree2 is non-empty therefore they can never be flip equivalent
		return false;
	}

	if(root1->val != root2->val) {
		// tree1 and tree2 are not flip-equivalent
		return false;
	}

	// recursive case

	// make a decision for the root node

	// 1. perform the flip operation
	swap(root1->left, root1->right);
	if(flipEquiv(root1->left, root2->left) and flipEquiv(root1->right, root2->right)) {
		return true;
	}

	// 2. do not perform the flip operation
	swap(root1->left, root1->right);
	if(flipEquiv(root1->left, root2->left) and flipEquiv(root1->right, root2->right)) {
		return true;
	}

	return false;

}

int main() {

	TreeNode* root1 = buildTree();
	TreeNode* root2 = buildTree();
	
	flipEquiv(root1, root2) ? cout << "true" << endl :
	                          cout << "false" << endl;

	return 0;
}