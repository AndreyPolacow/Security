#include <iostream>
#include <ostream>
#include <string>

using namespace std;

extern unsigned short H;

string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonHeight();



void ReadPersonData(string& n, unsigned short& a, unsigned short& h, unsigned short& w)

{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonHeight();
    h = H;
    ReadPersonWeight(w);

}