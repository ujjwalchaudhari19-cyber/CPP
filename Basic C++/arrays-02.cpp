#include <iostream>
using namespace std;

int main(){
  double numbers[] = {7, 67, 420, 69, 19, 8};
  double sum = 0;
  double count = 0;
  double average = 0;

  cout << "The numbers are: ";
  for(const double &n : numbers){
    cout << n << ' ';
    sum +=n;
    ++count;
  }
  cout << "\nTheir sum: " << sum << endl;

  average = sum/count;
  cout << "\nTheir average: "<< average << endl;

  
  return 0;
}