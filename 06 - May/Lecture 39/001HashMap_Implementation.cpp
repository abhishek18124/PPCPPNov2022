/*

	Implementation of HashMap/HashTable

*/

#include<iostream>

using namespace std;

class ListNode {

	public :

		int K;
		int V;
		ListNode* next;

		ListNode(int K, int V) {
			this->K = K;
			this->V = V;
			this->next = NULL;
		}

};

class HashMap {
	int N; //  to store the hash table capacity
	int M; //  to store the hash table size
	double L; // to store the load factor threshold

	ListNode** T; // to store the pointer to the  dynamic
	              // array that represents the hash table

	int hashFn(int K) {
		// transform K into a hash index
		return K%N;
	}

	void transfer(ListNode* head) {
		// 1. rehash (K, V) pairs present in the linkedList represented 
		//    by "head" pointer to the updated hashMap
		ListNode* temp = head;
		while(temp != NULL) {
			insert(temp->K, temp->V);
			temp = temp->next;
		}
		
		// 2. release memory allocated for the linkedList represented
		//    by "head" pointer
		temp = head;
		while(head != NULL) {
			head = head->next;
			delete temp;
			temp = head;
		}

	}

	void rehash() {

		// 1. save pointer to the current hashMap and its capacity
		ListNode** oldT = T;
		int oldN = N;
		
		// 2. create a hashMap with double capacity
		T = new ListNode*[2*N];
		N = 2*N;
		M = 0;

		// 3. transfer (K, V) pairs from old hashMap to the updated hashMap
		for(int i=0; i<oldN; i++) {
			transfer(oldT[i]);
		}
		
		// 4. release the memory allocated to the old hashMap
		delete [] oldT;

	}

	public :

		HashMap(int N=5, double L=0.7) {
			this->N = N;
			this->M = 0;
			this->L = L;

			T = new ListNode*[N];
			for(int i=0; i<N; i++) {
				T[i] = NULL;
			}
		}

		void insert(int K, int V) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. create a node with the given (K, V) pair and insert it at
			//    head of the linkedList stored at the hash index
			ListNode* n = new ListNode(K, V);

			// 3. update the pointer to the head of the linkedList stored at 
			//    the hash index such that it holds the address of the newly
			//    created node
			n->next = T[hashIdx];
			T[hashIdx] = n;

			M++;

			// 4. rehash, if loadFactor exceeds the loadFactor Threshold
			double loadFactor = M*1.0/N;
			if(loadFactor > L) {
				cout << "rehashing due to loadFactor = " << loadFactor << endl;
				rehash();
			}
		}

		ListNode* find(int K) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. search for the node with the given key in the  linkedList 
			//    stored at the hash index
			ListNode* temp = T[hashIdx];
			while(temp != NULL) {
				if(temp->K == K) {
					// you've found the node whose key matches the given key 'K'
					break;
				}
				temp = temp->next;
			}

			return temp;

		}

		void erase(int K) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. delete the node with the given key from the linkedList 
			//    stored at the hash index
			ListNode* cur = T[hashIdx];
			if(cur != NULL and cur->K == K) {
				// you've foudn the node that you wanted to delete at the head of the LL present at hashIndex
				T[hashIdx] = cur->next;
				delete cur;
				M--;
			} else {
				ListNode* prev= NULL;
				while(cur != NULL) {
					if(cur->K == K) {
						// you've found the node that you wanted to delete
						prev->next = cur->next;
						delete cur;
						M--;
						break;
					}
					prev = cur;
					cur = cur->next;
				}
			}

		}

		void printLinkedList(ListNode* head) {
			while(head) { // head != NULL
				cout << "(" << head->K << ", " << head->V << ") ";
				head = head->next;
			}
			cout << endl;
		}

		void printHashMap() {
			// iterate over buckets in the hashMap
			for(int i=0; i<N; i++) {
				// print the linkedList stored ith bucket of the hashMap
				cout << i << " : ";
				printLinkedList(T[i]);
			}
			cout << endl;
		}

		int& operator[](int K) {
			ListNode* n = find(K);
			if(n == NULL) {
				// K is not present
				int garbage;
				insert(K, garbage);
				n = find(K);
			}
			return n->V;
		}
};

int main() {
	
	HashMap hashMap;

	hashMap.insert(0, 0);
	hashMap.insert(1, 1);
	hashMap.insert(6, 36);

	hashMap.printHashMap();

	hashMap.insert(7, 49);

	hashMap.printHashMap();

	hashMap.insert(2, 4);
	hashMap.insert(12, 144);
	hashMap.insert(9, 81);

	hashMap.printHashMap();

	int key = 60;

	ListNode* n = hashMap.find(key);
	n != NULL ? cout << n->V << endl : cout << key << " not found!" << endl;

	key = 7;

	hashMap.erase(key);

	hashMap.printHashMap();

	key = 9;

	cout << hashMap[key] << endl; // 49

	key = 13;
	int value = 169;

	hashMap[key] = value;

	hashMap.printHashMap();

	key = 12;

	hashMap[key] = 0;

	hashMap.printHashMap();

	return 0;	
}