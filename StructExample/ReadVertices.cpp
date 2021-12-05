//This Reads vertices of triangle from data.txt and prints the mid of the vertices. 
#include <iostream>
# include <fstream>

using namespace std;

struct Point
{
  double X,Y;
};
Point midPoint(Point a, Point b);
Point *ReadFile();
int main()
{
  Point *Rp;
  Rp=ReadFile();
  cout<<"("<<midPoint(Rp[0],Rp[2]).X<<","<<midPoint(Rp[0],Rp[2]).Y<<")"<<"("<<midPoint(Rp[1],Rp[2]).X<<","<<midPoint(Rp[1],Rp[2]).Y<<")"<<"("<<midPoint(Rp[1],Rp[0]).X<<","<<midPoint(Rp[1],Rp[0]).Y<<")"<<endl;

  // Point Mp;
  // char c;
  // double x,y;
  // fstream myFile;
  // myFile.open("data.txt");
  // for(int i=0;i<3;i++)
  // {
  // myFile>>c>>p[i].X>>c>>p[i].Y>>c;
  // }

  return 0;
}

Point midPoint(Point a, Point b)
{
  Point M;
  M.X = (a.X+b.X)*0.5;
  M.Y = (a.Y+b.Y)*0.5;
return M;

}

Point *ReadFile()
{
  Point *p = new Point[3];
  char c;
  double x,y;
  fstream myFile;
  myFile.open("data.txt");
  for(int i=0;i<3;i++)
  {
  myFile>>c>>p[i].X>>c>>p[i].Y>>c;
  }
  return p;
}
