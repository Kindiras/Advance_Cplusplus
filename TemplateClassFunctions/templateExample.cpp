#include <iostream>

using namespace std;


template <class T> class Mathoperation
{
public:
	T add(T x, T y);
	T multiply(T x, T y);
	T divide(T x, T y);
	
};

template <class T> T Mathoperation<T>::add(T x, T y)
{
	return (x+y);
}

template <class T> T Mathoperation<T>::multiply(T x, T y)
{
	return (x*y);
}

template <class T> T Mathoperation<T>::divide(T x, T y)
{
	return (x*y);
}

int main()
{
	Mathoperation<float> mopfloat;
	Mathoperation<int> mopint;
	cout<<"floatresult:"<<mopfloat.add(3.4, 4.5)<<endl;
	cout<<"intresult:"<<mopint.add(3, 4)<<endl;
	return 0;
}