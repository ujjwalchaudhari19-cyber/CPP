#include <iostream>

using namespace std;
int power(int base, int power);

int main(){
  int baseNum;
  int powNum;

  cout<<"Enter the base number: ";
  cin>>baseNum;
  cout<<"Enter the power: ";
  cin>>powNum;

  cout<<power(baseNum, powNum)<<endl;

  return 0;
}

int power(int base, int power){
  int result = 1;
  for(int i=0; i<power; i++){
    result *= base;
  }

  return result;
}