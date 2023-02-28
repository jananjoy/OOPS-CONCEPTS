//============================================================================
// Name        : Deep_Copy.cpp
// Author      : Jananjoy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
#include"Sample.h"

int main() {
   Sample ob1; //Default constructor is called.
   Sample ob2 = ob1; //default copy constructor called.
   ob2.Display();
   Sample ob3; //Default constructor called.
   ob3 = ob1; //default overloaded = operator function called.
   ob3.Display();

	return 0;
}
