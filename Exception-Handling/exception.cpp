#include <iostream>
#include "exception.h"

using namespace std;

Demoexception::Demoexception(int x, int y)
{
	X = x;
	Y = y;
}
Demoexception::~Demoexception()
{
	cout<<"*********"<<endl;
}

int Demoexception::set1stInteger()
{
    int x; 
    cout<<"enter first integers for numerator"<<endl;
    cin>>x;
    X = x;
    return 0;
}

int Demoexception::get1stInteger()
{
	return X;
}

int Demoexception::set2ndInteger()
{
    int y; 
    cout<<"enter second integers for denominator"<<endl;
    cin>>y;
    Y = y;
    return 0;
}
int Demoexception::get2ndInteger()
{   
	return Y;
}

double Demoexception::dividing(float a, float b)
{
    float c;
    if(b==0)
    {
    	//throw(b);
    	throw string("Sorry:You can't divide by zero");
    }
    c = a / b;
    return c;
}
    