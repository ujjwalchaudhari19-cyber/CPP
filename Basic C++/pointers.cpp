#include <iostream>
using namespace std;

int main(){
  int var =5;

  int *point_var = &var;

  cout << "var: " << var << endl;

  cout << "Address of var: " << &var << endl;

  cout << "point_var: " << point_var << endl;

  cout << "Content of the address pointed by point_var: " << *point_var << endl;

  return 0;
}