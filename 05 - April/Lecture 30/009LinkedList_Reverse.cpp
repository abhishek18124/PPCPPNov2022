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

// time : O(n)

ListNode* reverseIterative(ListNode* head) {

	ListNode* cur = head;
	ListNode* prev = NULL;

	while(cur != NULL) {
		ListNode* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;

}

// time : O(n) space : O(n)

ListNode* reverseRecursive(ListNode* head) {

	// base case
	// if(head == NULL) {
	// 	// LL is empty
	// 	return head;
	// }

	// if(head->next == NULL) {
	// 	// LL has one node
	// 	return head;
	// }

	if(head == NULL || head->next == NULL) {
		return head;
	}

	// recursive case

	// 1. ask your friend to reverse the subList which starts from head->next
	ListNode* headFromMyFriend = reverseRecursive(head->next);

	ListNode* revSubListTail = head->next;
	revSubListTail->next = head;
	head->next = NULL;

	return headFromMyFriend;

}

int main() {

	ListNode* head = NULL; // initially, linkedList is initially empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	head = reverseIterative(head);

	printLinkedList(head);

	head = reverseRecursive(head);

	printLinkedList(head);

	return 0;
}