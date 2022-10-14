#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

vector<int> search_numbers(const string &str);

int main(int argc, char const *argv[])
{
    string str("1,a2,333");
    vector<int> arr = search_numbers(str);
    for (auto i : arr)
    {
        cout << i << endl;
    }
    return 0;
}

vector<int> search_numbers(const string &str)
{
    string numbers("0123456789");
    vector<int> vv;
    string::size_type pos = 0;

    while ((pos = str.find_first_of(numbers, pos)) != string::npos)
    {
        vv.push_back(pos);
        pos++;
    }

    return vv;
}