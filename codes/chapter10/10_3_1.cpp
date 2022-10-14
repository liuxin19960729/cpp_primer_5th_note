#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

bool ff(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}
bool ff2(const string &s1)
{
    return s1.size() <2;
}


int main(int argc, char const *argv[])
{
    vector<string> ivec = {"22", "3", "7555", "6666", "44", "3", "22"};
    //[true] [false] 判断分区域
    partition(ivec.begin(), ivec.end(),ff2);
    stable_sort(ivec.begin(), ivec.end(), ff); //长度相同不排序
    for (const auto &v : ivec)
    {
        cout << v << endl;
    }
    return 0;
}
