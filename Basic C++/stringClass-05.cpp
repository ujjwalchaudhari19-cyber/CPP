#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world, beautiful world!";
  cout << "Before: " << str << endl;

  str.replace(6,5, "Earth");
  
  cout << "After: " << str << endl;

  return 0;
}