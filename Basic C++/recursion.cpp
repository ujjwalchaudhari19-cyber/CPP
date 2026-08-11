#include <iostream>
#include <cmath>
using namespace std;

bool isInteger(double num);
int factorial(int n);

int main(){
  double n;
  int result;

  cout << "Enter a number: ";
  cin >> n;

  if(n<0 || !isInteger(n)){
    cout << "Please Enter a non negative integer" << endl;
  }
  else{
    cout<< "The factorial of "<< n << " is: " << factorial(n)<<endl;
  }

  return 0;
}

int factorial(int n){
  if(n==0){
    return 1;
  }

  if(n>1){
    return n*factorial(n-1);
  }
  else{
    return n*1;
  }
}

bool isInteger(double num){
  return floor(num) == num;
}