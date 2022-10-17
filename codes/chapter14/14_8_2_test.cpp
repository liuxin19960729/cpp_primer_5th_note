#include <iostream>
#include <functional>
using namespace std;

int main(int argc, char const *argv[])
{
    plus<int> plus;
    int c = plus(10, 100);
    cout << c << endl;
    return 0;
}
