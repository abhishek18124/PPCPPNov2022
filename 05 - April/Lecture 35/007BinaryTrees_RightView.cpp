/*

given the pre-order traversal of a binary tree, output its right view.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 30 60 70
*/

#include<iostream>
#include<queue>

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

	// 1. read the val of the root TreeNode
	int val;
	cin >> val;

	if(val == -1) {
		// construct an empty tree and return the pointer to its root
		return NULL;
	}

	// 2. construct the root TreeNode
	TreeNode* root = new TreeNode(val);

	// 3. read the preOrder traversal of the leftSubtree & build the leftSubtree
	root->left = buildTree();

	// 4. read the preOrder traversal of the rightSubtree & build the rightSubtree
	root->right = buildTree();

	return root;

}

void rightView(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		TreeNode* front = q.front(); q.pop();
		if(front == NULL) {
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			if(q.front() == NULL) {
				// front node is the rightMost node of the given level
				cout << front->val << " ";
			}
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}
}

int maxLevel = -1; 

void rightViewRecursive(TreeNode* root, int cur_level) {

	// base case
	if(root == NULL) {
		return;
	}

	// recursive case

	if(maxLevel < cur_level) {
		// root node is the right most node of the current level
		cout << root->val << " ";
		maxLevel = cur_level;
	}

	rightViewRecursive(root->right, cur_level+1);
	rightViewRecursive(root->left, cur_level+1);

}


int main() {

	TreeNode* root = NULL;
	root = buildTree();
	// rightView(root);
	rightViewRecursive(root, 0);
	return 0;
}