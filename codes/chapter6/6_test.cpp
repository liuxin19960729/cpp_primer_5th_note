#include <iostream>

// void fn(const int *);
// void fn(const int c[]);
// void fn(const int c[10]);
using namespace std;
void fn(const int (&c)[2][2])
{
    for (auto &ar : c)
    {
        for (auto v : ar)
        {
            cout << v << endl;
        }
    }
}

void p(short i)
{
    cout << "short" << i << endl;
}

void p(int i)
{
    cout << "int " << i << endl;
}

void zzc(const int &i)
{
    cout << "zzc(const int &i)" << i << endl;
}
void zzc(int &i)
{
    cout << "zzc(int &i)" << i << endl;
}
int main(int argc, char const *argv[])
{
    const int i = 100;
    int j = 200;
    zzc(i);
    zzc(j);
    zzc(200);
    return 0;
}

// void fn(const int *) {}
// void fn(const int c[]) {}
// void fn(const int c[10]) {}
