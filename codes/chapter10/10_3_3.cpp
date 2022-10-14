#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> strv;
    string word;
    while (cin >> word)
    {
        if (word == "quit")
            break;
        strv.push_back(word);
    }

    auto cnt = count_if(strv.begin(), strv.end(), [](const string &str)
                        { return str.find("crl") != string::npos; });

    cout << cnt << endl;

    return 0;
}
