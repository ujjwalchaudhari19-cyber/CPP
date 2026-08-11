#include <iostream>
using namespace std;

int main(){
  int numbers[5] = {7, 5, 6, 12, 35};

  cout<< "The numbers are: ";
  for(int n: numbers){
    cout << n << " ";
  }
  cout << endl;

  return 0;
}