/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

// class myCompartor {

// 	public :

// 	bool operator()(int a, int b) {
		
// 		// if(b < a) {
// 		// 	// for a minHeap, you need a swap
// 		// 	return true
// 		// } else {
// 		// 	return false;
// 		// }

// 		// return b < a;

// 		// if(b > a) {
// 		// 	// for a maxHeap, you need a swap

// 		// 	return true;

// 		// } else {
// 		// 	return false;
// 		// }

// 		return b > a;
// 	}

// };

class Customer {
	public :
		string name;
		int age;
		double balance;

		Customer(string name, int age, double balance) {
			this->name = name;
			this->age = age;
			this->balance = balance;
		}
};

class CustomerComparator {

	public :

	bool operator()(Customer a, Customer b) {
		
		// if(b.age < a.age) {
		// 	// I need a swap for a minHeap based on age
		// 	return true;
		// } else {
		// 	return false;
		// }

		if(b.balance > a.balance) {
			/// I need a swap for a maxHeap based on balance
			return true;
		} else {
			return false;
		}
 	}
};

int main() {

	// priority_queue<int, vector<int>, myCompartor> m; 
	
	// m.push(9);
	// m.push(7);
	// m.push(8);
	// m.push(5);
	// m.push(4);
	// m.push(6);
	// m.push(3);
	// m.push(2);
	// m.push(1);

	// cout << m.size() << endl;

	// while(!m.empty()) {
	// 	cout << m.top() << " ";
	// 	m.pop();
	// }

	// cout << endl;

	// cout << m.size() << endl;

	priority_queue<Customer, vector<Customer>, CustomerComparator> customerHeap;

	customerHeap.push(Customer("Krish", 18, 10000));
	customerHeap.push(Customer("Saurabh", 15, 100));
	customerHeap.push(Customer("Akkul", 65, 50000));
	customerHeap.push(Customer("Sujal", 19, 140));
	customerHeap.push(Customer("Shawn the Sheep", 20, 10));
	customerHeap.push(Customer("Harpreet", 16, 1000000));

	while(!customerHeap.empty()) {
		cout << customerHeap.top().name << endl;
		customerHeap.pop();
	}

	cout << endl;


	return 0;
}