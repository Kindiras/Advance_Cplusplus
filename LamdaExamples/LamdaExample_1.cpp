//
//  main.cpp
//  LamdaExpression
//
//  Created by Indiras Khatri on 10/14/21.
//  Copyright © 2021 Indiras Khatri. All rights reserved.
// auto someVar[](int a, int b) -> int {}

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i = 20;
    auto lda = [&i](int a, int b) {
        return a+b+i;
    };
    cout << lda(1,10) << endl;
    return 0;
}
