#include <iostream>

using namespace std;

int main(){
  int index = 1;
  while(index<=5){
    cout<<index<<endl;
    index++;
  }

  do{
    cout<<"Hello"<<endl;
    return 1;
  }
  while (index==6);
  {
    cout<<"Nothing"<<endl;
  }
  

  return 0;
} 