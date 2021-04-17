// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  //creating a vector of integers
        vector<int> vectorInts;  
  //creating an iterator for the vector
        vector<int>::iterator it;

  vectorInts.push_back(0);
  vectorInts.push_back(1);
  vectorInts.push_back(2);
  vectorInts.push_back(3);
  vectorInts.push_back(4);
  vectorInts.push_back(5);
  vectorInts.push_back(6);
  vectorInts.push_back(7);
  
        cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //printing the contents of vectorInts
        cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
          cout<<*it<<" ";
 
  //insert an element after the first element
  it  = vectorInts.begin() + 1;
  vectorInts.emplace(it, -1);
        cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
          cout<<*it<<" ";
    
  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.emplace(it + 3, -2);
        cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
          cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.emplace(it + 5, -3);
        cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
          cout<<*it<<" ";
    
  return 0;
}

