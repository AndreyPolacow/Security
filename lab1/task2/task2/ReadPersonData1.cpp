#include <iostream>
#include <ostream>
#include <string>

using namespace std;
string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonSalary(double* sal);

void ReadPersonData(string& n, unsigned short& a, double& S)
{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonSalary(&S);
}