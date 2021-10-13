//
//  main.cpp
//  FeaturesC++11
//
//  Created by Indiras Khatri on 10/13/21.
//  Copyright © 2021 Indiras Khatri. All rights reserved.
//

#include <iostream>

using namespace std;

template <class F, class L>
auto findMax(F i, L j) -> decltype(i > j ? i : j)
{
    return (i > j) ? i : j;
}
int main(int argc, const char * argv[]) {
    cout << findMax(4,5) << endl;
    cout << findMax(33.1,4.5) << endl;
    return 0;
}
