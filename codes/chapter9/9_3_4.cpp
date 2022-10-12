#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;
/**
 * 查找删除奇数
*/
int main(int argc, char const *argv[])
{
    forward_list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto pre = lst.before_begin();
    auto cur = lst.begin();
    while (cur != lst.end())
    {
        if ((*cur) % 2 == 0) //偶数
        {

            pre = cur;
            cur++;
            continue;
        }
        //奇数删除
        cur = lst.erase_after(pre);
    }

    for (const auto &v : lst)
    {
        cout << v << endl;
    }

    return 0;
}
