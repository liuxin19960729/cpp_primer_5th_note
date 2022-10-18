
#include <iostream>
#include <type_traits>
#include <typeinfo>
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

template <typename  T>
T move_cpy(T &&a)
{
    cout << a << endl;
    T c=a;
    T g=T(300);
    cout<<c<<endl;
    return a;
}

typedef int &&zz;

int main(int argc, char const *argv[])
{

    // AA<int> aa;
    // AA<int> *paa=&aa;
    // remove_reference<int>::type

    // int gg = 200;
    // int &&c = move_cpy(gg);
    // cout << gg << endl;

    const int a = 100;
    move_cpy(a);

    return 0;
}
