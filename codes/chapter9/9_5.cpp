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
    vector<char> cvec = {'l', 'x', 'c', 'r', 'l'};
    string str;
    str.assign(cvec.begin(), cvec.end());
    string str2(cvec.data(), 0, cvec.size());
    cout << str << endl;
    cout << str2 << endl;

    string strggg;
    strggg.reserve(100);
    char ch = 0;
    while (cin >> ch)
    {
        if (ch == 'q')
            break;
        strggg.push_back(ch);
        cout << "size:" << strggg.size() << endl;
        cout << "capacity:" << strggg.capacity() << endl;
    }

    cout << strggg << endl;
    return 0;
}
