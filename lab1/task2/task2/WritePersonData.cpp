#include <iostream>
#include <ostream>
#include <string>

using namespace std;


string S;

void WritePersonData(const string& n, const unsigned short* a,
    const string& h = "", const string& w = "")
{
    cout << "\nname :  " << n
        << "\nage :  " << *a
        << "\nheight : " << h
        << "\nweight : " << w
        << "\nsalary :  " << S;
}