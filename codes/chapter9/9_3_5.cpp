#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

class AA
{
private:
    /* data */
public:
    AA(/* args */);
    ~AA();
};

AA::AA(/* args */)
{
    cout << "A()" << endl;
}

AA::~AA()
{
    cout << "~A()" << endl;
}

int main(int argc, char const *argv[])
{
    list<AA> lst(10);
    lst.resize(2);
    lst.resize(11);//接收单个参数对象必须能够有默认构造
    return 0;
}
