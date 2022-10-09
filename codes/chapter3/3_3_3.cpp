#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    // 2
    //  int cnt = 5;
    //  vector<string> strvect;
    //  string str;
    //  while (cnt > 0)
    //  {
    //      cin >> str;
    //      for (auto &c : str)
    //      {
    //          if (isalpha(c))
    //          {
    //              c = toupper(c);
    //          }
    //      }
    //      strvect.push_back(str);
    //      cnt--;
    //  }

    // for (auto str : strvect)
    // {
    //     cout << str << endl;
    // }
    // //3
    // // 不合法 ivec 没有元素
    // vector<int> ivec;
    // // ivec[0] = 100;
    // if (!ivec.empty()) //修改 添加判断保证可以访问
    // {
    //     ivec[0] = 100;
    // }

    // 4
    // vector<int> v1(10, 42); //最好
    // vector<int> v2(10);
    // for (auto &v : v2)
    // {
    //     v = 42;
    // }
    // vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // 5

    vector<int> ivv(10);
    decltype(ivv.size()) index = 0;
    decltype(ivv.size()) size = ivv.size();
    while (index < size)
    {
        cin >> ivv[index];
        index++;
    }
    index = 0;
    int last_index = size - 1;
    while (index <= last_index)
    {
        int sum = ivv[index] + ivv[last_index];
        cout << ivv[index] << " + " << ivv[last_index] << " = " << sum << endl;
        index++;
        last_index--;
    }

    return 0;
}
