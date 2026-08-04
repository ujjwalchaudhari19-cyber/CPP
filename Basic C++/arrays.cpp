#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int luckyNums[20] = {4, 8, 15, 16, 23, 42};

  cout << luckyNums[0] << endl;
  cout << luckyNums[1] << endl;
  cout << luckyNums[2] << endl;
  cout << luckyNums[3] << endl;
  cout << luckyNums[4] << endl;
  luckyNums[6] = 67;
  cout << luckyNums[5] << endl;
  cout << luckyNums[6] << endl;

  return 0;
}