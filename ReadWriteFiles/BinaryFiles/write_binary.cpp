#include <iostream>
#include <fstream>

using namespace  std;
#pragma pack(push,1)

struct Employee
{
	string name;
	int age;
	int salary;
};
#pragma pack(pop)

int main()
{
	Employee emp[2];
	emp[0].name = "Indi";
	emp[0].age = 35;
	emp[0].salary = 80000;
	emp[1].name = "Sam";
	emp[1].age = 40;
	emp[1].salary = 80000;

	ofstream outFile;
	string outFileName = "binary.txt";
	outFile.open(outFileName,ios::binary);
	if(outFile.is_open())
	{
	 for(int i = 0;i<2;i++)
         outFile.write((char *)( &emp[i]),sizeof(Employee));
    outFile.close();
	}
	else
	{
      cout<<"could not open file:" +outFileName <<endl;
	}
	return 0;
}
