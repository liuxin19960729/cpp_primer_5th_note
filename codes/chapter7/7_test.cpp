#include <iostream>
using namespace std;
class AA
{
    int a;

public:
    AA() : a(0)
    {
        cout << "AA()" << endl;
    }

    AA(int a) : a(a)
    {
        cout << "AA(a)" << endl;
    }
};

struct CC
{
    int a;
    AA aa;
};

int main(int argc, char const *argv[])
{
    CC c = {1};

    return 0;
}
