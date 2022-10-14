#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    // vector<string> strvec;
    list<string> strvec;
    const string cc = "lx";
    string word;
    while (cin >> word)
    {
        if (word == "quit")
            break;
        strvec.push_back(word);
    }

    cout << cc << "occurs count:" << (std::count(strvec.cbegin(), strvec.cend(), cc)) << endl;
    return 0;
}
