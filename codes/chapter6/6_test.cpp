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
    cout <<"short" <<i << endl;
}

void p(int i)
{
    cout <<"int " <<i << endl;
}

int main(int argc, char const *argv[])
{
    p(1);
    short c=1;
    p(c);
    return 0;
}

// void fn(const int *) {}
// void fn(const int c[]) {}
// void fn(const int c[10]) {}
