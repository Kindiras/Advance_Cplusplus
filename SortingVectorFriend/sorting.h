#ifndef SORTING
#define SORTING
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Testsorting
{
public:
	Testsorting(int a, string nam);
	~Testsorting();
	friend void print(const Testsorting &test);
	friend bool comp_name(const Testsorting &a, const Testsorting &b);
	friend bool comp_age(const Testsorting &a, const Testsorting &b);
	
private:
	int age;
	string name;


};

#endif