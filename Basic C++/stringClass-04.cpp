#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world, beautiful world";
  cout << "Before: " << str << endl;

  str.erase(6, 5);
  cout <<"After: " << str << endl;
}