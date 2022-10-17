#include <iostream>

using namespace std;

class AA
{
    friend ostream &operator<<(ostream &os, AA &aa);

public:
    int a = 3;
    void aa(int);
private:
    int b = 1;
    int c = 2;
};

ostream &operator<<(ostream &os, AA &aa)
{
    os << "a:" << aa.a << "b:" << aa.b << "c:" << aa.c;
    return os;
}

void AA::aa(int)
{
    cout << "int" << endl;
}



int main(int argc, char const *argv[])
{

    AA aa;
    cout << aa << endl;
    operator<<(cout, aa) << endl;
    aa.a = 200;
    operator<<(cout, aa) << endl;
    cout << aa << endl;
    aa.aa(100);

    return 0;
}
