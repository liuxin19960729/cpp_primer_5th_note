#include <iostream>

using namespace std;

class AA
{
    friend ostream &operator<<(ostream &os, AA &aa);
    friend istream &operator>>(istream &in, AA &aa);

public:
    int a = 0;

private:
    int b = 0;
    int c = 0;
};

ostream &operator<<(ostream &os, AA &aa)
{
    os << "a:" << aa.a << "b:" << aa.b << "c:" << aa.c;
    return os;
}

istream &operator>>(istream &in, AA &aa)
{
    int a;
    in >> a;
    if (in)
    {
        aa.a = a;
    }
    else
    {
        aa = AA();
    }

    return in;
}

int main(int argc, char const *argv[])
{
    AA aa;
    cin >> aa;
    cout << aa << endl;
    return 0;
}
