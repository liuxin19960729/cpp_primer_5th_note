#include <iostream>
#include <new>
#include <memory>
using namespace std;
struct AA
{
    int *p = nullptr;
    AA(int v) : p(new int(v))
    {
    }
    AA(AA &&a)
    {
        cout << "右值拷贝" << endl;
        delete p;
        p = a.p;
        a.p = nullptr;
    }
    ~AA()
    {
        cout << "~AA()" << endl;
        delete p;
    }
};
void fun(AA *aa)
{
    delete aa;
}
unique_ptr<AA> VV()
{
    unique_ptr<AA> ptr(new AA(200));
    return ptr;
}
void VV2(unique_ptr<AA> ptr)
{
}
AA VV3()
{
    AA aa(10000);
    return aa;
}
int main(int argc, char const *argv[])
{
    unique_ptr<AA> pp(new AA(200));
    // VV2(pp);//不允许
    auto ptr = VV3();
    cout << *(ptr.p) << endl;
    return 0;
}
