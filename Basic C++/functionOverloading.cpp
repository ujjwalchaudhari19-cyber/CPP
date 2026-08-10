#include <iostream>
using namespace std;

int aboslute(int var);
float absolute(float var);

int main(){
  cout << "Absolute value of -5: "<< absolute(-5) << endl;
  cout << "Absolute valueof 5.5" << absolute(5.5f) << endl;

  return 0;
}

float absolute(float var){
  if(var < 0.0){
    var = -var;
  }
  return var;
}

int aboslute(int var){
  if(var < 0){
    var = -var;
  }
  return var;
}