#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    string str(10, 'c');
    auto end = str.end();
    for (auto iter = str.begin(); iter != end; iter++)
    {
        (*iter) = toupper(*iter);
    }
    cout << str << endl;

    vector<int> ivv = {1, 2, 3};
    auto ivvend = ivv.end();
    for (auto iter = ivv.begin(); iter != ivvend; iter++)
    {
        *iter = (*iter) * 2;
    }

    for (auto v : ivv)
    {
        cout << v << ",";
    }
    cout << endl;
    return 0;
}
