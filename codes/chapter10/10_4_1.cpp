#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
#include <list>
#include <iterator>
using namespace std;

void prin(const int &i)
{
    cout << i << " ";
}

int main(int argc, char const *argv[])
{
    vector<int> rawvec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v1{100};
    vector<int> v2;
    list<int> l1;
    for_each(rawvec.cbegin(), rawvec.cend(), prin);
    cout << endl;
    // 123  指定begin前面位置开始插入  insert 插入
    copy(rawvec.cbegin(), rawvec.cend(), inserter(v1, v1.begin()));
    for_each(v1.cbegin(), v1.cend(), prin);
    cout << endl;
    // push_back 插入
    copy(rawvec.cbegin(), rawvec.cend(), back_inserter(v2));
    for_each(v2.cbegin(), v2.cend(), prin);
    cout << endl;
    //front_back 插入
    copy(rawvec.cbegin(), rawvec.cend(), front_inserter(l1));
    for_each(l1.cbegin(), l1.cend(), prin);
    cout << endl;
    return 0;
}
