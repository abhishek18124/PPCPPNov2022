#include<iostream>

using namespace std;


int main() {
  
  char ch = 'A';

  void* ptr = &ch;
  
  cout << ptr << endl;

  // cout << *ptr << endl; // you cannot de-ref generic pointer type

  return 0;
}