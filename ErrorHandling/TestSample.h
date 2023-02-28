#ifndef ERRORSAMPLE
#define ERRORSAMPLE
#include<iostream>
using namespace std;
class SampleFile
{
private:
	int aValue1,bvalue2, aResult;

public:
	SampleFile();
	~SampleFile();
	bool Calculate();
	bool Display();

};
SampleFile::SampleFile()
{
	aValue1 =10;
	bvalue2 =5;
	aResult=0;
}
SampleFile::~SampleFile ()
{
}

bool SampleFile::Calculate ()
{
	bool ExecutionStatus = false;
	try
	{ 
		aResult = aValue1 + bvalue2;
        if(aResult < 0)
			throw aResult ;
	
       ExecutionStatus =true;
		
	}
	catch(int a)
	{
		cout<<"Execution Error: Error Value"<<a<<endl;
		ExecutionStatus = false;

	}
	
	return ExecutionStatus;
}

bool SampleFile::Display ()
{
	bool ExecutionStatus = false;
	try
	{ 
		//if(aResult < 0)
		//	throw aResult ;
		cout<<"The Result of the Calculation :" <<aResult<<endl ;
		ExecutionStatus =true; 
	}
	catch(...)
	{
		cout<<"Execution Error :"<<endl;
		ExecutionStatus = false;
	}
	return ExecutionStatus;
}
#endif
