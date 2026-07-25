#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int age;
  string name;
  cout << "Enter your age: ";
  cin >> age;
  cin.ignore();

  cout << "Age of the user is: " << age << endl;

  getline(cin, name);
  cout << "Hello " << name << endl;

  return 0;
}