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
    multimap<int, int> mulmap;
    mulmap.insert({1, 1});
    mulmap.insert({1, 2});
    for (auto &kv : mulmap)
    {
        cout << kv.first << kv.second << endl;
    }
    return 0;
}
