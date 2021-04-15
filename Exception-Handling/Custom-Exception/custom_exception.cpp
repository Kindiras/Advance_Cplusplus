#include <iostream>
#include <exception>

using namespace std;

class Custom_exception: public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Something wrong happened";
	}
};
class Test_custum
{
public:
	void check_exception();
	
};
void Test_custum::check_exception()
{throw Custom_exception();}

int main()
{
	Test_custum test;
	try{
	test.check_exception();
}
catch(Custom_exception &e)
{
	cout<<e.what()<<endl;
}
return 0;
}