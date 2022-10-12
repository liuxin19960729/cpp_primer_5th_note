#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;

class Info
{
public:
    Info(string age, string name) : age(age), name(name)
    {
        outstr += "[";
        outstr += name;
        outstr += ",";
        outstr += age;
        outstr += "]";
    }

    const string age;
    const string name;
    const string &outString();

private:
    string outstr;
};

const string &Info::outString()
{
    return outstr;
}

vector<string> split(const string &cstr, const char &ch);

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cerr << "a.out filename" << endl;
        return -1;
    }
    ifstream input(argv[1]);
    if (!input)
    {
        cerr << argv[1] << "打开失败" << endl;
        return -1;
    }
    vector<Info *> vec;
    string line;
    while (input.good())
    {
        input >> line;
        vector<string> vstrs = split(line, ',');
        string age = "99999";
        string name("unknow");
        for (auto str : vstrs)
        {
            vector<string> items = split(str, '=');
            if (items.size() != 2)
            {
                continue;
            }
            if (items[0] == "name")
            {
                name = items[1];
            }
            else if (items[0] == "age")
            {
                age = items[1];
            }
        }
        Info *info = new Info(age, name);
        vec.push_back(info);
    }
    ofstream ou("context_out.txt", ofstream::trunc);
    if (!ou)
    {
        cerr << "out file 打开失败" << endl;
        return -1;
    }

    for (auto ifo : vec)
    {
        cout << ifo->outString() << endl;
        ou << ifo->outString() << '\n';
    }
    ou << flush;

    return 0;
}

vector<string> split(const string &cstr, const char &ch)
{
    auto index = cstr.find(ch);
    bool noFind = index & (1 << sizeof(decltype(cstr.find(ch))));
    vector<string> strs;
    // cout << "index:" << index << endl;
    assert(!noFind);
    if (!noFind) //寻找到
    {
        string str1 = cstr.substr(0, index);
        string str2 = cstr.substr(index + 1, cstr.size());
        strs.push_back(str1);
        strs.push_back(str2);
        // cout<<str1<<endl;
        // cout<<str2<<endl;
    }

    return strs;
}