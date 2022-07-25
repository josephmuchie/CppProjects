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

template<typename T>
void Print(T value)
{
    cout<< value << endl;
}

struct DateStruct
{
    int year;
    int month;
    int day;
};

void print(const DateStruct& date)
{
    cout << date.year << '/' << date.month << '/' << date.day << endl;
}

class DateClass
{
public:
    int m_year;
    int m_month;
    int m_day;

    void print()
{
    cout << m_year << '/' << m_month << '/' << m_day << endl;
}
};

template <typename POW> 

std::int64_t powint(POW base, POW exp)
{
    assert(exp >= 0 && "powint: exp param has negative value");
    
    std::int64_t result = 1;
    while (exp) {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}

void print_container(const std::vector<int>& c)
{
    for (int i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
}

int main()
{
    std:: mt19937 mt; //Instantiate a 32-bit Mersenne Twister
    std:: uniform_int_distribution die6(1,6);  //generate random numbers in a range 1-6


    string arr[]{"Plumtree","Bulawayo","Mt Pleasant","Matshobana", "Luveve"};
    int arr_length = sizeof(arr)/sizeof(arr[0]);

    std::vector<string> Cities;
    Cities.push_back("Mutoko");
    Cities.push_back("Harare");

    for(int i = 0; i < arr_length;  ++i){
        Cities.push_back(arr[i]);
    }
    
    Cities.erase(Cities.begin()+2);

    cout<< powint(7, 12) << " people" <<endl;

    std::cout << "Cities are {";
    for(auto n : Cities) {
        std::cout << n << ", ";
    }
    std::cout << "}; \n";

    char myString[]{"Muchie"};
    const int length{ static_cast<int>(std::size(myString))};
    Print(myString);

    for(int count{1}; count <= 40; ++count)
    {
        std::cout << die6(mt) << '\t';

        if(count % 10 == 0)  //If we've printed 10 numbers, start a new row
        std::cout << '\n';
    }

    return 0;
}
