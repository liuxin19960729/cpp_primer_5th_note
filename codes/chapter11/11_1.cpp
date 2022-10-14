#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, size_t> map;

    string world;
    while (cin >> world)
    {
        for_each(world.begin(), world.end(), [](char &c) {
            c=toupper(c);
        });
        map[world]++;
    }

    for (const auto &w : map)
    {
        cout << w.first << ":" << w.second << endl;
    }

    return 0;
}
