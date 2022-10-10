#include <iostream>
#include <string>
#include <cctype>
using namespace std;
struct CC
{
    CC &operator()(int c)
    {
        cout << "CC &operator()()" << c << endl;
        return *this;
    }
};

void c(int (&arr)[3])
{
    for (auto v : arr)
    {
        cout << v << endl;
    }
}

int main(int argc, char const *argv[])
{
    // int a[] = {1, 2, 3};
    // c(a);



    return 0;
}
