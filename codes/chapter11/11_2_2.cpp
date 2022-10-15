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
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, list<int>> maps;
    string line;
    string word;
    int lineno = 1;
    ifstream in_fstream("11_2_2.txt");
    assert(in_fstream.good());
    while (getline(in_fstream, line))
    {
        istringstream istrstream(line);

        while (istrstream >> word)
        {
            maps[word].push_back(lineno);
        }

        lineno++;
    }

    for (const auto &kv : maps)
    {
        for (const auto &nom : kv.second)
        {
            cout << "lineno:" << nom << " " << kv.first << endl;
        }
    }
    vector<int> ivc{1, 2, 3};
    map<string, list<int>> mapp2(maps.cbegin(), maps.cend());

    for (const auto &kv : mapp2)
    {
        cout << "k:" << kv.first << " v:" << endl;
    }
    return 0;
}
