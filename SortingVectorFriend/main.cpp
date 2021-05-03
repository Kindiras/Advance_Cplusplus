#include "sorting.h"
#include "sorting_class.cpp"
#include "sorting_function.cpp"
#include <vector>
using namespace std;

int main()
{
	vector<Testsorting> tests;

	tests.push_back(Testsorting(10,"Ian"));
	tests.push_back(Testsorting(25,"Tika"));
	tests.push_back(Testsorting(35,"Indi"));
	tests.push_back(Testsorting(60,"Basu"));
	tests.push_back(Testsorting(58,"Vishnu"));
    
    sort(tests.begin(),tests.end(),comp_name);
	for(int i =0; i < tests.size(); i++)
	{
		print(tests[i]);
	}
    cout<<"below is according to age:"<<endl;
	sort(tests.begin(),tests.end(),comp_age);
	for(int i =0; i < tests.size(); i++)
	{
		print(tests[i]);
	}
return 0;	
}