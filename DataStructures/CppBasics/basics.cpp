//
//  basics.cpp
//  DataStructures
//
//  Created by Joseph Muchengeti on 23.06.22.
//

#include <stdio.h>
#include <iostream>
#include <cstdint>
#include <cassert>
#include <iterator>
#include <vector>
#include <string>
#include <iterator>
#include <array>
#include <random>  //for std:: mt19937 and std:: uniform_int_distribution

using namespace std;

int main()
{
    int a=5, b=10, *ptr;
    *ptr = a;

    cout << "Value a: " << a <<"\n";
    cout << "Value b: " << a <<"\n";
    cout << "Value *a: " << ptr <<"\n";
    cout << "Value: ptr" << a <<"\n";

    return 0;
}
