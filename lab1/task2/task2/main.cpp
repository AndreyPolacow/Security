#include  <iostream>
#include <ostream>
#include <string>


using namespace std;

void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight);
void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "");

extern string S;

int main(int argc, char* argv[])
{

    string n;//���
    unsigned short a, h, w;//������� ���� ���
    double s;//��
    ReadPersonData(n, a, s);
    ReadPersonData(n, a, h, w);
    S = to_string(s);//������� - ����.  ���. - ��� ����
    WritePersonData(n, &a, to_string(h), to_string(w));
}