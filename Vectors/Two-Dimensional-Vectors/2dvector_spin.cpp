#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctime>    
#include <cstdlib>
#include <vector>

using namespace std;
double random_spin();


int main()
{
    srand(time(NULL));
  float f;
vector< vector<int> > grid; vector<int> test;
for (int row = 0; row<3;row++)
{
	for(int col = 0; col<5;col++)
	{
        f = random_spin();
        cout<<"value:"<<f<<endl;
        if(f > 0.5)
        {
            test.push_back(1);
        }
		else
        {
            test.push_back(-1);
        }
        
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

double random_spin()
    {
        int randomNumber = rand();
    return float(randomNumber)/RAND_MAX;
    }    