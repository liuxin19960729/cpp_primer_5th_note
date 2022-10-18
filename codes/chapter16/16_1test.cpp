
#include <iostream>
using namespace std;

template <typename T>
class AA
{
public:
    static int a;
};
template <typename T>
int AA<T>::a = 100;

int main(int argc, char const *argv[])
{
    AA<int>::a = 20;
    cout << AA<int>::a << endl;
    AA<double>::a = 30;
    cout << AA<int>::a << endl;
    return 0;
}
