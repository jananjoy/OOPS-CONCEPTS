/*
Q. How to Return a reference from [] in c++ program 
*/

#include <iostream>
using namespace std;

const int SIZE = 3;

class ReturnReference
{
private:
	int a[SIZE];
public:
  ReturnReference() 
  {
    register int i;
    for(i = 0; i <SIZE; i++) 
       a[i] = i;
  }
  
  int &operator[](int i) 
  {
     return a[i];
  }
};

int main()
{
  ReturnReference myObject;

  cout << myObject[2];  
  cout << " ";

  myObject[2] = 25;     // [] on left of =

  cout << myObject[2];  // now displays 25

  return 0;
}
