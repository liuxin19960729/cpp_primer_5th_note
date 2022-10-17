#include <iostream>
using namespace std;
struct A
{
    virtual void fn()
    {
        cout << "A.fn()" << endl;
    }
    virtual ~A()
    {
        cout << "~A()" << endl;
    }
};
struct B : A
{
    int fn(int)
    {
        cout << "A.fn()" << endl;
        return 100;
    }
    ~B()
    {
        cout << "~B()" << endl;
    }
};
int main(int argc, char const *argv[])
{

    A *pb = new B();
    delete pb;
    return 0;
}
