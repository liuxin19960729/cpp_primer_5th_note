
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

struct ZZ
{
    template <typename T>
    friend ZZ &operator<<(ZZ &zz, const T);
    template <typename T>
    ZZ &operator<<(const T &v)
    {

        return operator<<(*this, v);
    }
};

ZZ &operator<<(ZZ &zz, const int &v)
{
    cout << v << endl;
    return zz;
}
ZZ &operator<<(ZZ &zz, const string &str)
{
    cout << str << endl;
    return zz;
}
template <ssize_t Len>
ZZ &operator<<(ZZ &zz, const char (&ch)[Len])
{
    cout << ch << "ch array" << endl;
    return zz;
}
ZZ &operator<<(ZZ &zz, const char *ch)
{
    cout << ch << "ch pointer" << endl;
    return zz;
}

int main(int argc, char const *argv[])
{

    ZZ zz;
    zz << "sss";
    char chs[] = "ss";
    zz << chs;
    return 0;
}
