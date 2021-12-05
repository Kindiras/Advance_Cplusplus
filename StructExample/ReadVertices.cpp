//This reads the three vertices of triangle and prints the mid points. 

#include <iostream>
# include <fstream>

using namespace std;

struct Point
{
  double X,Y;
};
Point midPoint(Point a, Point b);
int main()
{
  Point *p = new Point[3];
  Point Mp;
  char c;
  double x,y;
  fstream myFile;
  myFile.open("data.txt");
  for(int i=0;i<3;i++)
  {
  myFile>>c>>p[i].X>>c>>p[i].Y>>c;
  }
  cout<<"("<<midPoint(p[0],p[2]).X<<","<<midPoint(p[0],p[2]).Y<<")"<<"("<<midPoint(p[1],p[2]).X<<","<<midPoint(p[1],p[2]).Y<<")"<<"("<<midPoint(p[1],p[0]).X<<","<<midPoint(p[1],p[0]).Y<<")"<<endl;
  return 0;
}

Point midPoint(Point a, Point b)
{
  Point M;
  M.X = (a.X+b.X)*0.5;
  M.Y = (a.Y+b.Y)*0.5;
return M;

}
