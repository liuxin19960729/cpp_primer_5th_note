
#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <vector>
using namespace std;

template <typename T>
typename remove_reference<T>::type &&mov_cus(T &&t)
{
    return static_cast<typename remove_reference<T>::type &&>(t);
}

template <typename T>
struct ZZ
{
    // typename 显示的告诉编译器这是个类型
    typedef typename vector<T>::size_type sz_tp;
};

int main(int argc, char const *argv[])
{

    ZZ<int>::sz_tp a = 200;

    int c = 100;
    int &&g = static_cast<int &&>(c);

    cout << g << endl;
    g = 399;
    cout << g << endl;
    return 0;
}
