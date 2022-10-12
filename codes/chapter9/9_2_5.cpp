#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<const char *> lst{"liuxin", "crl"};
    vector<string> vstr;
    vstr.assign(lst.begin(), lst.end());
    for (auto &str : vstr)
    {
        cout << str << endl;
    }
    return 0;
}
