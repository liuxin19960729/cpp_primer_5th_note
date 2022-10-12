#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

void fun(forward_list<string> &lst, const string &s1, string s2);
int main(int argc, char const *argv[])
{
    forward_list<string> lst{"lx", "lve"};
    fun(lst, "lve", "crl");
    for (const auto v : lst)
    {
        cout << v << endl;
    }
    return 0;
}

void fun(forward_list<string> &lst, const string &s1, string s2)
{
    auto cur = lst.cbegin();
    auto pre = lst.cbefore_begin();
    while (cur != lst.end())
    {
        if (*cur == s1)
        {
            lst.insert_after(cur, s2);
            return;
        }
        pre = cur;
        cur++;
    }
    lst.insert_after(pre, s2);
}