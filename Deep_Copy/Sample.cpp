/*
 * Sample.cpp
 *
 *  Created on: Nov 26, 2015
 *      Author: user
 */
#include"Sample.h"
#include<iostream>
using namespace std;

Sample::Sample():myValue(0)
{
	cout<<"Sample constructor"<<endl;
}

int Sample::getValue()
{
	return myValue;
}

void Sample::Display()
{
	cout<<"Display methods of the sample class"<<endl;
}





