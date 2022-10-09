#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    // 2
    //  while (getline(cin, s))
    //  {
    //      if (!s.empty())//读入一行
    //      {
    //          cout << "读入:" << s << endl;
    //      }
    //  }

    // cin >> s; 读入一个词
    // cout << "word: " << s << endl;
    // 2
    /*
    cin>>s; 接收每一个字符 从第一个不是空白符(\n \0 制表符等)开始计算 到 下一个空白符开始
    getline 接收字符 到 \n字符结束 存入字符到 string(可变字符容器) note": \n不存储
    */

    // 3
    //  string s1;
    //  string s2;
    //  cin >> s1 >> s2;
    //  // string max = s1 >= s2 ? s1 : s2;
    //  //修改长度长的那条字符串大
    //  string max = s1.size() >= s2.size() ? s1 : s2;
    //  cout << "max: " << max << endl;

    // 4
    string ss;
    string result;
    int i = 0;
    while (getline(cin, ss))
    {
        if (i >= 5)
            break;

        result += ss;
        i++;
    }
    cout << result << endl;

    return 0;
}
