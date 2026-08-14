#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world, Wonderful world";
  cout << "String: " << endl;

  size_t first_occurence = str.find("world");

  size_t last_occurence = str.rfind("world");

  if(first_occurence != string::npos){
    cout << "First occurence: 'world' found at position: "<< first_occurence << endl;
    cout << "Last occurence: 'world' found at position: "<< last_occurence << endl;
  }
  else{
    cout << "'world' not found" << endl;
  }

  return 0;
}