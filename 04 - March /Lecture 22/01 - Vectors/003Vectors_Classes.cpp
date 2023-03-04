#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	string name; 
	int age;
	char gender;
	double credits;
	
	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}	
};

/* 
	return 'true' when a swap isn't required.

*/

bool myAgeComparator(customer c1, customer c2) {
	// if(c1.age < c2.age) {
	// 	// you don't need a swap given that we are sorting customers in the inc. order of their ages
	// 	return true;
	// } else {
	// 	// you need a swap
	// 	return false;
	// }

	return c1.age < c2.age;
}

bool myCreditsCompartor(customer c1, customer c2) {
	if(c1.credits > c2.credits) {
		// you don't need a swap since we are sorting in the dec. order of credits
		return true;
	} else {
		// you need a swap
		return false;
	}
}

int main() {

	vector<customer> v;

	v.push_back(customer("akkul",  20, 'M', 200));
	v.push_back(customer("sabhya", 19, 'F', 100));
	v.push_back(customer("saurabh",21, 'M', 550));
	v.push_back(customer("dinesh", 18, 'M', 250));

	sort(v.begin(), v.end(), myAgeComparator);

	for(customer c : v) {
		cout << c.name << " " << c.age << endl;
	}

	sort(v.begin(), v.end(), myCreditsCompartor);

	for(customer c : v) {
		cout << c.name << " " << c.age << " " << c.credits << endl;
	}


	return 0;
}