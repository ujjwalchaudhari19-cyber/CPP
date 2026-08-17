#include <iostream>
using namespace std;

int main(){
  string city1 = "Paris";
  string &ref_city = city1;

  cout << "Variable Value: " << city1 << endl;
  cout << "Refernce Value: " << ref_city << endl;

  string city2 = "New York";
  ref_city = city2;
  cout << endl << "City1 = " << city1 << endl;
  cout << "city2: " << city2 << endl;
  cout << "ref_city: " << ref_city << endl;

  return 0;
}