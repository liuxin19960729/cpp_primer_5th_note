
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

template <ssize_t Len>
void aa(int (&c)[Len])
{
    cout << Len << endl;
}
int main(int argc, char const *argv[])
{
    int ar[20] = {};
    aa(ar);
    return 0;
}
