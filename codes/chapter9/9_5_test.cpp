#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

int main(int argc, char const *argv[])
{
    // string str("l1x***crl**");

    // string numbers("0123456789");

    // string::size_type pos = 0;

    // pos = str.find_first_of(numbers, pos);

    // cout << pos << endl; // 1

    // pos = str.find_first_of(numbers, 2);
    // pos++;
    // cout << pos << endl; // 1

    int s = 100;
    string vv = to_string(s);
    cout << vv << endl;
    cout << (stoi(vv, nullptr, 10)) << endl;
    return 0;
}
