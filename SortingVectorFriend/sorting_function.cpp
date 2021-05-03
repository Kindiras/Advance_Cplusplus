#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void print(const Testsorting &test)
{
 cout <<test.age<<" "<<test.name<<endl;
}

bool comp_name(const Testsorting &a,const Testsorting &b)
{
	return a.name < b.name;
}

bool comp_age(const Testsorting &a,const Testsorting &b)
{
	return (a.age < b.age);
}