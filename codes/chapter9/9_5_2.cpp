#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

void replaceA(string &s, const string &ov, const string &nv);

void addprefix(string &s, const string &prefix);
void addsuffix(string &s, const string &suffix);

int main(int argc, char const *argv[])
{
    string str("lx***crl**");
    replaceA(str, "**", "love*");
    addprefix(str, "[prefix]");
    addsuffix(str, "[suffix]");
    cout << str << endl;

    return 0;
}

void addprefix(string &s, const string &prefix)
{
    s.insert(0, prefix);
}
void addsuffix(string &s, const string &suffix)
{
    // s.append(suffix);
    s.insert(s.size(), suffix);
}
void replaceA(string &s, const string &ov, const string &nv)
{
    if (s.empty() || ov.empty() || nv.empty())
        return;

    auto olen = ov.size();
    auto begin = s.begin();
    decltype(ov.size()) index = 0;
    while (begin != s.end())
    {
        if (s.end() - begin < olen)
            break;
        string sub = s.substr(index, olen);
        if (ov == sub)
        {
            // s.erase(index, olen);
            // s.insert(index,nv);
            s.replace(index, olen, nv.c_str());
        }

        begin++;
        index++;
    }
}