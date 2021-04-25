#include <iostream>
#include <set>

using namespace std;

class Test
{
int id;
string name;

public:
	Test(): id(0),name("")
	{

	}
	Test(int id, string name): id(id), name(name)
	{

	}
	void print() const
	{
		cout << id << ": "<<name <<endl;
	}
	bool operator<(const Test &other) const
	{
		return name < other.name;
	}
};
int main()
{
	set <int> number;
	number.insert(2);
	number.insert(20);
	number.insert(22);
	number.insert(29);

	for(set<int>::iterator it = number.begin(); it != number.end(); it++)
	{
		cout <<*it <<endl;
		
	}
	set<int>:: iterator itfind = number.find(29);
	if(itfind != number.end())
	{
		cout<<"found number:"<< *itfind<<endl;
	}

    set<Test> tests;
    tests.insert(Test(10,"Indi"));
    tests.insert(Test(30,"Mike"));
    tests.insert(Test(40,"Sham"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
    {
    	it -> print();
    }
return 0; 
}
