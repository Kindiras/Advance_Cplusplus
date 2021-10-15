//
//  main.cpp
//  LamdaEx2
//
//  Created by Indiras Khatri on 10/14/21.
//  Copyright © 2021 Indiras Khatri. All rights reserved.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main ()
{
    //creating a vector of integers
    vector<double> x;
    //creating an iterator for the vector
    
    x.push_back(0);
    x.push_back(1.5);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4.5);
    x.push_back(5);
    x.push_back(6);
    x.push_back(7.1);
    
    auto AddLamda = [&x](auto delta){
        for(int i = 0; i <x.size(); ++i)
        {x[i] += delta ;}
        };
    AddLamda(1.2);
    for(auto a:x){
    cout<< a << " ";
}
}