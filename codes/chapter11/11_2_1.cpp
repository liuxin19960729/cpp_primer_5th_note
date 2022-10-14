#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, vector<string>> map;

    map["刘"].push_back("鑫");
    map["曹"].push_back("若琳");
    for (const auto &v : map)
    {
        for (auto &name : v.second)
        {
            cout << v.first << name << endl;
        }
    }
    return 0;
}
