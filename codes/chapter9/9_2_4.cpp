#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    //空容器 1
    vector<int> iv1;
    // 2  初始化列表 1,2
    vector<int> iv2_1{1, 2};
    vector<int> iv2_2 = {1, 2};

    // 3 拷贝构造
    vector<int> iv3_1(iv2_1);
    vector<int> iv3_2 = iv2_1;

    // 4 迭代器构造
    vector<int> iv4(iv3_1.begin(), iv3_1.end());

    // 5
    vector<int> iv5(10); // 10个默认
    // 6
    vector<int> iv6(10, 1); // 10个1

    //容器拷贝构造 全部拷贝
    //迭代构造 可全部 可部分构造

    list<int> il{1, 2, 3};
    vector<double> dv(il.size());
    decltype(dv.size()) i = 0;
    for (const auto &v : il)//0 1 2
    {
        dv[i] = v;//0 1 2
        i++;//1 2 3
    }

    stringstream sout;
    sout << "[";
    for (auto &dd : dv)//3 2 1
    {

        sout << dd << (i == 1 ? "" : ",");//3 2 1
        i--;//2 1 0
    }
    sout << "]";
    cout << sout.str() << endl;
    return 0;
}
