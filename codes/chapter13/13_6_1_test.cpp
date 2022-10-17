#include <iostream>
#include <memory>
#include <utility>
#include <cassert>
#include <vector>
#include <initializer_list>
#include "string_cus.cpp"
using namespace std;

struct AA
{
    int a;
    AA()
    {
        cout << "AA()" << endl;
    }

    AA(const AA &aa)
    {
        cout << "拷贝构造" << endl;
    }
    ~AA()
    {
        cout << "析构函数" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // vector<string_cus> aa;
    // string_cus a("sss");
    // aa.push_back(a);
    allocator<AA> alloca;
    auto oldaddr = alloca.allocate(1);
    alloca.construct(oldaddr);
    auto newaddr = alloca.allocate(1);
    uninitialized_copy(oldaddr, oldaddr + 1, newaddr);
    alloca.destroy(oldaddr);
    alloca.deallocate(oldaddr, 1);
    return 0;
}
