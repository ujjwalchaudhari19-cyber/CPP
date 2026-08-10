#include <iostream>

using namespace std;

void hello(string name, int age);

int main(){
  hello("Ujjwal",19);

  return 0;
}

void hello(string name, int age){
  cout << "Hello " <<name << "you are " << age << " years old" << endl; 
}
