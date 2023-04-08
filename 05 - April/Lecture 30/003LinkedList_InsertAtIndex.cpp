#include<iostream>

using namespace std;

class ListNode {

	public :

		int val;
		ListNode* next;

		ListNode(int val) {
			this->val = val;
			this->next = NULL;
		}

};

void insertAtHead(ListNode*& head, int val) {
	
	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {

	while(head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

ListNode* getNode(ListNode* temp, int j) {

	int k = 0;
	while(temp != NULL && k < j) {
		temp = temp->next;
		k++;
	}

	return temp;

}

// time : O(n)

void insertAtIndex(ListNode*& head, int val, int i) {

	if(i == 0) {
		// inserting a node at the 0th index is equivalent to insertion at head
		insertAtHead(head, val);
		return;
	}

	// 1. create a new node with the given 'val'
	ListNode* n = new ListNode(val);

	// 2. get hold of the pointer to the node at the (i-1)th index
	ListNode* prev = getNode(head, i-1);

	if(prev == NULL) {
		// ith index is not valid
		return;
	}

	// 3. update the next field of the newly created node to point to the node which comes after the prev node
	n->next = prev->next;

	// 4. update the next field of the prev node to point to the newly created node
	prev->next = n;

}

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	// insertAtHead(head, 40);
	// insertAtHead(head, 30);
	// insertAtHead(head, 20);
	// insertAtHead(head, 10);
	
	printLinkedList(head);

	insertAtIndex(head, 60, 1);

	printLinkedList(head);

	return 0;
}