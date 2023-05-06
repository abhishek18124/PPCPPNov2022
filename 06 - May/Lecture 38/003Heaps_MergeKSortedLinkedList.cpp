/*

    Given k sorted linked list, merge them and print the sorted output.

    k = 3
    Input : 1->3->5
            2->4->6 
            0->8->7
        
    Output: 0->1->2->3->4->5->6->7->8

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class ListNode {

    int val;
        
    public :
        
        ListNode* next;

        ListNode(int val) {
            this->val = val;
            this->next = NULL;
        }

        int getVal() {
            return val;
        }
};

void insertAtHead(ListNode*& head, int val) {
    
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;

}

void printLinkedList(ListNode* head) {

    while(head != NULL) {
        cout << head->getVal() << " "; // or use head->val if val is public
        head = head->next;
    }
    
    cout << endl;

}

class nodeComparator {

    public :

    bool operator()(ListNode* a, ListNode* b) {
        if(b->getVal() < a->getVal()) { // or use b->val < a->val if val is public
            // you need a swap for a minHeap
            return true;
        }
        // you don't need a swap
        return false;
    }

};

ListNode* mergeKSortedLinkedList(vector<ListNode*> v) {

    priority_queue<ListNode*, vector<ListNode*>,  nodeComparator> minHeap(v.begin(), v.end());

    // for(ListNode* h : v) {
    //     minHeap.push(h);
    // }

    ListNode* dummy = new ListNode(0);
    ListNode* temp  = dummy; // to track the last node added to the output list

    while(!minHeap.empty()) {
        ListNode* minNode = minHeap.top();
        minHeap.pop();

        temp->next = minNode;
        temp = temp->next;

        if(minNode->next != NULL) {
            minHeap.push(minNode->next);
        }
    }

    return dummy->next;

}

int main() {

    ListNode* head1 = NULL; 

    insertAtHead(head1, 7);
    insertAtHead(head1, 4);
    insertAtHead(head1, 1);

    printLinkedList(head1);

    ListNode* head2 = NULL; 

    insertAtHead(head2, 8);
    insertAtHead(head2, 5);
    insertAtHead(head2, 2);

    printLinkedList(head2);

    ListNode* head3 = NULL; 

    insertAtHead(head3, 9);
    insertAtHead(head3, 6);
    insertAtHead(head3, 3);

    printLinkedList(head3);

    vector<ListNode*> v = {head1, head2, head3};

    ListNode* head = mergeKSortedLinkedList(v);

    printLinkedList(head);

    return 0;
}
