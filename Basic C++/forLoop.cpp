#include <iostream>
#include <iterator>

using namespace std;

int main (){
  int index = 7;

  for (int i = 1; i < index; i++)
  {
    cout << i <<endl;
  }
  cout<<endl;
  cout<<"Numbers according to the indices in an array:"<<endl;
  int nums[]= {67,69,420,45,96,00,76};
  int length = size(nums);
  for(int i=0; i<length; i++){
    cout<<nums[i]<<endl;
  }
  
  return 0;
}