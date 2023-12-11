#include <iostream>
#include <ostream>
#include <string>

using namespace std;


unsigned short ReadPersonAge()
{
    unsigned short a;

    cout << "age: \n";
    cin >> a;
    return a;
}

string ReadPersonName()
{
    string name;
    cout << " name: \n";
    cin >> name;
    return name;
}

unsigned short H;

void ReadPersonHeight()
{
    cout << " high: \n";
    cin >> H;
}

void ReadPersonWeight(unsigned short& w)
{
    cout << "weight: \n";
    cin >> w;
}

void ReadPersonSalary(double* S)
{
    cout << "sale: \n";
    cin >> *S;
}


void ReadPersonData(string& n, unsigned short& a, double& S)
{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonSalary(&S);
}

void ReadPersonData(string& n, unsigned short& a, unsigned short& h, unsigned short& w)

{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonHeight();
    h = H;
    ReadPersonWeight(w);

}

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

int main(int argc, char* argv[])
{

    string n;//имя
    unsigned short a, h, w;//возраст рост вес
    double s;//ЗП
    ReadPersonData(n, a, s);
    ReadPersonData(n, a, h, w);
    S = to_string(s);//Большая - глоб.  мал. - тип дабл
    WritePersonData(n, &a, to_string(h), to_string(w));
}