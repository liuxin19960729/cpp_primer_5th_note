#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>

using namespace std;
class Info
{
public:
    Info(int age, string name) : age(age), name(name)
    {
        ostringstream outstrstream;
        outstrstream << "name[" << name << "] ";
        outstrstream << "age[" << age << "]";
        outstr=outstrstream.str();
    }
    Info(const Info &info) : age(info.age),
                             name(info.name), outstr(info.outstr)
    {
    }

    const int age;
    const string name;
    const string &outString() const;

private:
    string outstr;
};
const string &Info::outString() const
{
    return outstr;
}
vector<string> split(const string &cstr, const char &ch);
int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        cerr << "a.out readfile wrtiefile" << endl;
        return -1;
    }

    ifstream input(argv[1]);
    ofstream output(argv[2]);
    if (!input || !output)
    {
        cerr << (!input ? argv[1] : argv[2])
             << " 文件打卡失败" << endl;
        return -1;
    }

    string line;
    vector<Info> vec;

    while (getline(input, line))
    {
        vector<string> items = split(line, ',');
        string name("未知");
        int age(9999);
        for (const auto &item : items)
        {
            vector<string> kv = split(item, '=');
            assert(kv.size() == 2);
            if (kv[0] == "name")
                name = kv[1];
            else if (kv[0] == "age")
                age = atoi(kv[1].c_str());
            else
                // title不匹配
                assert(false);
        }
        Info f(age, name);
        vec.push_back(f);
    }

    for (const auto &v : vec)
    {
        output << v.outString() << '\n';
    }
    output << endl;
    return 0;
}

vector<string> split(const string &cstr, const char &ch)
{
    string str(cstr);
    for (auto &v : str)
    {
        if (ch == v)
            v = ' ';
    }
    istringstream inputstr(str);
    vector<string> vec;
    string word;
    while (inputstr >> word)
    {
        vec.push_back(word);
        cout << word << endl;
    }

    return vec;
}