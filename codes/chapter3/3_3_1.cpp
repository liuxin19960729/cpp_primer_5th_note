#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // c++11 以前错误   vector<vector<int> >
    vector<vector<int>> a;
    // 错误类型不容
    // vector<string> sec = a;
    // 10 个  null string 正确
    // vector < string > ss(10, "null");

    vector<int> v1; // 0
    cout << v1.size() << endl;
    vector<int> v2(10); // 10个0
    cout << v2.size() << endl;
    vector<int> v3(10, 42); // 10个42
    cout << v3.size() << endl;
    vector<int> v4{10}; // 1个10
    cout << v4.size() << endl;
    vector<int> v5{10, 42}; // 1个10,一个42
    cout << v5.size() << endl;

    vector<string> v6{10}; // 10个 ""
    cout << v6.size() << endl;
    vector<string> v7{10, "hi"}; // 10个 "hi"
    cout << v7.size() << endl;

    return 0;
}
