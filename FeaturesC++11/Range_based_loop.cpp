//
//  main.cpp
//  Range_based_Loop
//
//  Created by Indiras Khatri on 10/13/21.
//  Copyright © 2021 Indiras Khatri. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    auto nam = {"Indi","Tika", "sita"};
    
    for(auto n: nam)
    {
        cout << n << endl;
    }
    return 0;
}
