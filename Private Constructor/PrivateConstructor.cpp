/*
Q1. It is necessary that a constructor in a class should always be public ?
A. False . When we want that a user of the class shouldnot be able to create an object 
   of a class but the member functions of the class should be able to create it
   then the constructor should be made private.
  */
#include<iostream>
using namespace std;

class PrivateConstructor 
{
private:
	int aValue ;
	PrivateConstructor(int temp)
	{
		aValue = temp ;
	}
public:
	PrivateConstructor()
	{
		Display();
	}

	void Display()
	{
     PrivateConstructor myObject(10);
	 cout<<myObject.aValue ;
	}

};

int main()
{
  PrivateConstructor Object1;
 // PrivateConstructor Object2(2);
	return 0;
}
