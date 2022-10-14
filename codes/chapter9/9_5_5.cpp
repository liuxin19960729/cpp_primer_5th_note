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
    vector<string> vv;
    string word;
    while (cin >> word)
    {
        if (word.compare("quit") == 0)//和 c语言 strcmp 相同
            break;

        vv.push_back(word);
    }

    double sum = 0;

    for (const auto &v : vv)
    {
        try
        {
            sum += stod(v);
        }
        catch (const std::invalid_argument &e)
        {
            cout << "invalid_argument:" << v << endl;
        }
        catch (const std::out_of_range &e)
        {
            cout << "out of range:" << v << endl;
            sum += 999999999.0;
            cout << "+999999999.0" << endl;
        }
    }

    cout << sum << endl;

    return 0;
}
