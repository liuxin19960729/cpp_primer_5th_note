#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    //insert 插入数据迭代器不会失效的方式
    string str = "liuxin*crl";
    auto begin = str.begin();
    while (begin != str.end())
    {
        if (*begin == '*')
        {
            *begin = 'i';
            begin = str.insert(begin, 'a');
        }

        cout << *begin++ << flush;
    }

    return 0;
}
