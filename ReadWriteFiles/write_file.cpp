#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFile;
	string outFileName = "test.txt";
	outFile.open(outFileName);
	if(outFile.is_open())
	{
		outFile<<"This is first line in."<<endl;
		outFile<<456<<endl;
		outFile.close();
	}
	else 
	{
		cout <<"Could not open the file";
	}
	return 0;
}