#include<iostream>

using namespace std;

class customer {
	public :
		char* name;
		int age;
		char gender;
		double credits;

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			name = new char[100];
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		customer(customer& c) {
			cout << "I am inside the copy constructor of the customer class" << endl;
			name = new char[100];
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
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
	
	customer c("dinesh", 20, 'M', 500);
	
	customer c2 = c; // copy constructor

	c2.printCustomerInfo();

	strcpy(c2.name, "yogesh");

	cout << "c2.name = " << c2.name << endl;
	cout << "c.name = " << c.name << endl; 

	c2.age = 25;
	cout << "c2.age = " << c2.age << endl;
	cout << "c.age = " << c.age << endl; 

	c2.gender = 'F';
	cout << "c2.gender = " << c2.gender << endl;
	cout << "c.gender = " << c.gender << endl; 

		
	return 0;
}