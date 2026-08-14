#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world, world!";
  cout << "Before: " << str << endl;

  str.insert(13, "beautiful ");
  cout << "After: " << str << endl;

  return 0;
}