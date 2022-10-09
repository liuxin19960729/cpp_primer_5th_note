#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main(int argc, char const *argv[])
{

    string str(10, 'z');
    cout << "raw: " << str << endl;
    //范围for
    // for (auto &c : str)
    // {
    //     c = 'X';//1 全用X代替
    // }

    // 2
    //  decltype(str.size()) size = str.size();
    //  decltype(str.size()) index = 0;
    //  while (index < size)
    //  {
    //      str[index] = 'X';
    //      index++;
    //  }

    // cout << "edited1: " << str << endl;

    // for (decltype(str.size()) i = 0; i < size; i++)
    // {
    //     str[i] = 'B';
    // }
    // cout << "edited2: " << str << endl;

    // note 在使用下标访问字符前一定判断是否允许访问

    //去除输入的标点符号
    // cin >> str;
    // string nstr;
    // for (auto c : str)
    // {
    //     if (ispunct(c))
    //         continue;

    //     nstr.push_back(c);
    // }

    // cout << nstr << endl;

    const string sss("ss");
    for(auto &c:sss){
        // c='g'; error sss 整个对象空间const 里面的成员
        //变量值不允许修改
    }
    return 0;
}
