#include<iostream>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		// customer() {
		// 	cout << "I am inside the default constructor of the customer class" << endl;
		// }

		customer(char* n, int a, char g, double c) {
			cout << "\nI am inside the parameterised constructor of the customer class\n";
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};

int main() {

	customer c("kakkar", 20, 'M', 123.45);

	c.printCustomerInfo();

	customer c2; // this will invoke the default constructor of the customer class

	return 0;
}