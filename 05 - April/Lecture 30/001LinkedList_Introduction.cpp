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

// void insertAtHead(ListNode*& head, int val) {

// 	// 1. create a new node with the given 'val'
// 	ListNode* n = new ListNode(val);

// 	// 2. update the 'next' field of the newly created node to point to the head of the LL
// 	n->next = head;

// 	// 3. make the newly created node as the new head of the LL
// 	head = n;

// }

ListNode* insertAtHead(ListNode* head, int val) {

	// 1. create a new node with the given 'val'
	ListNode* n = new ListNode(val);

	// 2. update the 'next' field of the newly created node to point to the head of the LL
	n->next = head;

	// 3. make the newly created node as the new head of the LL
	head = n;

	return head;

}


void printLinkedList(ListNode* head) {

	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

int main() {

	// ListNode* n = new ListNode(10);

	// cout << n->val << endl;

	ListNode* head = NULL; // initially, LL is empty

	// insertAtHead(head, 50);
	// insertAtHead(head, 40);
	// insertAtHead(head, 30);
	// insertAtHead(head, 20);
	// insertAtHead(head, 10);
	
	head = insertAtHead(head, 50);
	head = insertAtHead(head, 40);
	head = insertAtHead(head, 30);
	head = insertAtHead(head, 20);
	head = insertAtHead(head, 10);
	
	printLinkedList(head);




	return 0;
}