#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

void aaaaa(const string &str, decltype(str.size()) size)
{
    if (str.size() <= size)
    {
        cout << str;
    }
}

int main(int argc, char const *argv[])
{
    vector<string> str{"11111111", "as"};

    for_each(str.cbegin(), str.cend(), bind(aaaaa, placeholders::_1, 100));
    return 0;
}
