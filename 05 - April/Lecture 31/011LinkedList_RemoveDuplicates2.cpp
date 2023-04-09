#include<iostream>

using namespace std;

class ListNode {
public:

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

ListNode* removeDuplicates(ListNode* head) {
	// base case
	if(head == NULL) {
		// LL is empty list
		return head;
	}

	if(head->next == NULL) {
		// LL has one node
		return head;
	}

	// recursive case

	if(head->val != head->next->val) {
		// head node of the given LL will be the head of the final LL
		ListNode* headFromMyFriend = removeDuplicates(head->next);
		head->next = headFromMyFriend;
		return head;
	} else {
		while(head->next != NULL and head->val == head->next->val) {
			head = head->next;
		}
		ListNode* headFromMyFriend = removeDuplicates(head->next);
		return headFromMyFriend;	
	}
}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 2);
	insertAtHead(head, 2);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	insertAtHead(head, 1);
	insertAtHead(head, 1);
	insertAtHead(head, 1);
	insertAtHead(head, 1);
	
	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}