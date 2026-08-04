#include <iostream>

using namespace std;

int main()
{
  string phrase = "Ujjwal Chaudhari";
  cout << phrase.length() << endl;
  cout << phrase[0] << endl;
  cout << phrase.find("Chaudhari", 0) << endl;
  cout << phrase.substr(8, 3) << endl;

  return 0;
} 
