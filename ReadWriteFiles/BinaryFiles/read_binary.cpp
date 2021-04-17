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
	ifstream inFile;
	string inFileName = "binary.txt";
	inFile.open(inFileName,ios::binary);
	if(inFile.is_open())
	{
	 for(int i = 0;i<2;i++)
         inFile.read((char *)( &emp[i]),sizeof(Employee));
    inFile.close();
	}
	else
	{
      cout<<"could not open file:" +inFileName <<endl;
	}
	for (int j = 0; j<2; j++)
	{
		cout<<"Name:"<<emp[j].name<<endl;
		cout<<"age:"<<emp[j].age<<endl;
		cout<<"salary"<<emp[j].salary<<endl;
	}
	return 0;
}
