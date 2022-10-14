#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
#include <list>
#include <iterator>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fsr("10_4_2.txt");
    istream_iterator<string> i_iter(fsr);
    istream_iterator<string> eof;
    vector<string> strvec;
    while (i_iter != eof)
    {
        strvec.push_back(*i_iter++);
    }

    //去重
    // sort(strvec.begin(), strvec.end());
    vector<string>z;
    auto begin = unique_copy(strvec.begin(), strvec.end(),back_inserter(z));

    


    for (const auto &v : z)
    {
        cout << v << endl;
    }
    return 0;
}
