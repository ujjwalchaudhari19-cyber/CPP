#include <iostream>

using namespace std;

int main(){
  int age = 19;
  int *pAge = &age;
  double gpa = 8.15;
  string name = "Ujjwal";

  cout << "Age: " << &age <<endl;
  cout << "Gpa: " << &gpa <<endl;
  cout << "Name: " << &name <<endl;
  cout << *pAge << endl;

  return 0;
}