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
    int c = (5 % (-2));
    int d = (-5 % 2);
    int e = (5 % 2);
    cout << (-5 % (-2)) << endl;
    cout << (-5 % 2) << endl;
    cout << 5 % 2 << endl;
    return 0;
}
