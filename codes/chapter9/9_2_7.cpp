#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1{1, 2, 3};
    list<int> ls2{1, 3, 2};
    vector<int> v2;
    v2.assign(ls2.begin(), ls2.end());
    cout << (v1 < v2) << endl;
    return 0;
}
/*
note:每个元素允许对应比较符的比较

len 相等 对应的元素相等  结果相等
len 相等  比较第一个不同的 结果就是 容器比较的结果
len 不相等
    子序列 < 
    or
    第一个不同的比较 
*/
