#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

struct AA
{
    AA()
    {
        cout << "AA()" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /**
     * unsinged buf_size=100;
     * int ia[buf_size] 错误 buf_size编译时不确定 不是常量
     * int ia[4*7-14]；正确
     * char st[11]="fundamental";//装不小 还有一个\0字符没有装上
     *
     */

    /*
       string sa[10];10个默认
       int ia[10] 10个0

    */

    int ia[3];      //编译器随机
    AA strs[2]; // 会调用类的默认构造函数构造类
    for (size_t i = 0; i < sizeof(ia) / sizeof(int); i++)
    {
        cout << ia[i] << endl;
    }


   /*
     vector 大小不固定
     数组大小固定 只要创建就不能修改
   */

    return 0;
}
