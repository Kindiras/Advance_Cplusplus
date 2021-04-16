#include <iostream>

using namespace  std;
#pragma pack(push,1)

struct Employee
{
	string name;
	int age;
	int salary;
}emp1, emp2;
#pragma pack(pop)

void Employee_info(struct Employee emp);

int main()
{
	emp1.name = "Indi";
	emp1.age = 35;
	emp1.salary = 80000;
	emp2.name = "Tika";
	emp2.age = 30;
	emp2.salary = 80000;
	cout<<"first employee info: "<<endl;
	Employee_info(emp1);
	cout<<"second employee info: "<<endl;
	Employee_info(emp2);
	return 0;
}

void Employee_info(struct Employee emp)
{
	cout<<"employee name is: "<<emp.name<<endl;
	cout<<"Employee age is: "<<emp.age<<endl;
	cout<<"Employee salary per year in $: "<<emp.salary<<endl;
}