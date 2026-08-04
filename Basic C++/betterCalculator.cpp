#include <iostream>

using namespace std;

int main(){
  double num1;
  double num2;
  char op;

  cout << "Enter 1st number: ";
  cin >> num1;

  cout << "Enter 2nd number: ";
  cin >> num2;

  cout << "Enter operator: ";
  cin >> op;

  int result;

  if(op == '+'){
    result = num1 + num2;
  }
  else if(op =='-'){
    result = num1 - num2;
  }
  else if(op =='/'){
    result = num1/num2;
  }
  else if(op == '*'){
    result = num1*num2;
  }
  else{
    cout << "Enter valid operator" << endl;
  }

  cout << result << endl;

  return 0;
}