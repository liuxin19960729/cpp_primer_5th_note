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
    vector<pair<string, int>> pvec{{"1", 1}, {"2", 2}};
    pvec.push_back({"3", 3});
    pair<string, int> p1("4", 5);
    pair<string, int> p2{"5", 6};
    pair<string, int> p3{"6", 7};
    pair<string, int> p4(p3);
    pvec.push_back(p1);
    pvec.push_back(p2);
    pvec.push_back(p4);
    for (auto &p : pvec)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
