#include <iostream>

using namespace std;

class Bad_alloc
{
public:
	Bad_alloc();
	int Memory_alloc();
	~Bad_alloc();
private:
     int *a;	

};

Bad_alloc::Bad_alloc()
{
	
}
Bad_alloc::~Bad_alloc()
{
	
}

int Bad_alloc::Memory_alloc()
{
	a = new int[200000000000000000];
	return 0;
}
int main()
{
 Bad_alloc bad;
 try
 {
 bad.Memory_alloc();
 }
catch(bad_alloc &e)
{
	cout<<"exception caught:"<<e.what()<<endl;
}
 return 0;
}
