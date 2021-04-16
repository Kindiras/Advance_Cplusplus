#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	string inFileName = "test.txt";
	inFile.open(inFileName);
	if(inFile.is_open())
	{
		while(!inFile.eof())
		{
		string line;
		getline(inFile,line);
        cout<<line<<endl;
        }
		inFile.close();
	}
	else 
	{
		cout <<"Could not open the file";
	}
	return 0;
}