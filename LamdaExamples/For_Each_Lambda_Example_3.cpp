//
//  main.cpp
//  LamdaExample-3
//
//  Created by Indiras Khatri on 10/15/21.
//  Copyright © 2021 Indiras Khatri. All rights reserved.
// for_each in lambda expression Example
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> vInt = {4,12,3,5,85,91};
    double tsum_V = 0;
    for_each(begin(vInt), end(vInt), [&tsum_V] (int x) {tsum_V+=x;\
     cout << "elements:" << x <<endl;});
    cout << "the sum of all the elements is:" << tsum_V << endl;
    return 0;
}
