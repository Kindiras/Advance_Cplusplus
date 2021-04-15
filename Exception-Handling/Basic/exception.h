#ifndef EXCEPTION_HANDLING
#define EXCEPTION_HANDLING

class Demoexception
{
public:
	Demoexception(int x, int y);
	double dividing(float a, float b);
	~Demoexception();
	int set1stInteger();
	int get1stInteger();
	int set2ndInteger();
	int get2ndInteger();

private:
     int X; int Y;	
};
#endif