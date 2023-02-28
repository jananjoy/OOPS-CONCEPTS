#include<iostream>
#include<cassert>
#include"TestSample.h"
using namespace std;

int main()
{
	SampleFile myObject;
	assert(myObject.Calculate ());
	assert(myObject.Display());

	return 0;
}
