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
	
	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	
	cout << endl;

}

// time : O(n) space : O(1)

int lengthIterative(ListNode* head) {

	int count = 0;
	while(head != NULL) {
		count++;
		head = head->next;
	}

	return count;

}

// time : O(n) space : O(n) due to fn call stack

int lengthRecursive(ListNode* head) {

	// base case
	if(head == NULL) {
		// LL is empty
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute the length of the subList which starts from the node that comes after the head node

	int x = lengthRecursive(head->next);

	return 1+x;

}

int main() {

	ListNode* head = NULL; // initially, linkedList empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	cout << lengthIterative(head) << endl;

	cout << lengthRecursive(head) << endl;

	return 0;
}