#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct Employ
{
  string name;
  int *salary;//it has huge array for 12 months per person so pointer not int.
};
Employ *ReadFile(string filename);
int main()
{
  Employ *E;
  E = ReadFile("Employ.txt");
  cout<<E[0].name;
  cout<<E[0].salary[1];
return 0;
}

Employ *ReadFile(string filename)
{
  Employ *Emp; //array so pointer
  int Ne,Nm;
  string info;
  fstream myFile;
  myFile.open(filename);
  myFile >> Ne >> info >> Nm >> info>>info;
  cout<<"Number of employ:"<<Ne<<"\n"<<"total months:"<<Nm<<endl;
  Emp=new Employ[Ne];
  //initializaiton of pointer
  for(int i=0;i<Ne;i++)
  {
    Emp[i].salary = new int[Nm];
  }
for (int j=0;j<Ne;j++)
{
  myFile>>Emp[j].name;
  for(int s=0;s<Nm;s++)
  {
    myFile>>Emp[j].salary[s];
  }
}
return Emp;
}
