#include <iostream>
using namespace std;
struct CC
{
    CC &operator()(int c)
    {
        cout << "CC &operator()()" << c << endl;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    CC cc;
    CC &z = cc(100);
    return 0;
}
