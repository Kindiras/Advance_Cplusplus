#include "exception.cpp"
#include "exception.h"

int main()
{
	Demoexception demo(1,1);
	demo.set1stInteger();
	demo.set2ndInteger();
	try{
		float r;
		r = demo.dividing(demo.get1stInteger(),demo.get2ndInteger());
	cout<<"the result is:"<<r<<endl;
        }
	//catch(float error)
        catch(string & error)
	   {//cout<<"your number " <<error  <<"\t" <<"can't be accepted for denominatro"<<endl;
        cout<<error<<endl;}
	return 0;
}