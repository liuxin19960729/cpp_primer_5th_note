#include <iostream>
#include <list>
#include <deque>
#include <vector>
using namespace std;
typedef vector<int> ivec_t;
typedef ivec_t::iterator iter_t;
iter_t search_v(iter_t begin,
                iter_t end, int dst);
int main(int argc, char const *argv[])
{
    // begin==end 没有元素
    // begin!=end至少有一个元素
    // [begin,end) 元素的范围
    ivec_t vec{1, 2, 3, 4};
    
    iter_t it1 = search_v(vec.begin(), vec.end(), 3);
    iter_t it2 = search_v(vec.begin(), vec.end(), 100);
    if (it1 != vec.end())
    {
        cout << "找到:" << (*it1) << endl;
    }
    if (it2 != vec.end())
    {
        cout << "找到:" << (*it2) << endl;
    }
   


    return 0;
}
iter_t search_v(iter_t begin,
                iter_t end, int dst)
{
    while (begin != end)
    {
        if (dst == *begin)
            return begin;
        begin++;
    }

    return end;
}