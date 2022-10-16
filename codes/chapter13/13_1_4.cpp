#include <iostream>
#include <string>
using namespace std;

struct AA
{
    static int unique;
    int no;
    AA() : no(unique++)
    {
    }
    AA(const AA &a) : no(unique++)
    {
    }

    AA &operator=(const AA &a)
    {
        return *this;
    }
};

int AA::unique = 1;

void gg(const AA &a)
{
    cout << a.no << endl;
}

int main(int argc, char const *argv[])
{
    AA a, b = a, c = b;
    gg(a); // 1 1
    gg(b); // 1 2
    gg(c); // 1 3
    return 0;
}
