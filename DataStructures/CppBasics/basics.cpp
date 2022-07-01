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

using namespace std;

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



std::int64_t powint(int base, int exp)
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

int main()
{
    int array[4]{4,3,5};
    cout<< powint(7, 12) << " peoplesss" <<endl;

    DateStruct today;
    DateClass m_today;


    today.day = 28;
    m_today.m_day = 24;

    today.month = 06;
    m_today.m_month = 06;

    today.year = 2022;
    m_today.m_year = 2022;


    print(today);
    m_today.print();
    cout<<array[1] <<endl;

    return 0;
}
