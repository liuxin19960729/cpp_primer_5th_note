#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <list>
#include <fstream>
#include <sstream>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> map1 = {{100, 0},{1, 0}, {2, 2}};

    auto iter = map1.find(1);
    if (iter != map1.end())
    {
        iter->second = 1;
    }

    auto beg = map1.begin();

    while (beg != map1.end())
    {
        beg->second = 100;
        beg++;
    }

    for (auto &v : map1)
    {
        cout << v.first << " : " << v.second << endl;
    }
    return 0;
}
