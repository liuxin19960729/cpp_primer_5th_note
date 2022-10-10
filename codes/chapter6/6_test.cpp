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

int main(int argc, char const *argv[])
{
    int aa[2][2] = {{1}, {2}};
    fn(aa);
    return 0;
}

// void fn(const int *) {}
// void fn(const int c[]) {}
// void fn(const int c[10]) {}
