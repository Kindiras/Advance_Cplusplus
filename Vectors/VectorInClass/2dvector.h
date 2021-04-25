
#ifndef VECTOR_2D
#define VECTOR_2D
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

class RandomSpin
{
public:
    double random_spin();
private:
    vector< vector<int> > grid;
};
#endif