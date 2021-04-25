#include <iostream>
#include <vector>

using namespace std;
int random_integer();


int main()
{
vector< vector<int> > grid; vector<int> test;
for (int row = 0; row<3;row++)
{
	for(int col = 0; col<5;col++)
	{
        test.push_back(random_integer()-1);
		
    }
    grid.push_back(test);

}

for (int row = 0; row<3;row++)
{
	for(int col = 0; col<5;col++)
	{
        cout<<grid[row][col];
		
    }
    cout<<endl;

}

return 0;
}

int random_integer()
    {
    	return (int (rand() % 2));

    }    