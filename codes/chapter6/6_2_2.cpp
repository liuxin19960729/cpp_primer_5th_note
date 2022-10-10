#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

// 1
int sum(initializer_list<int> list)
{
    int sum = 0;
    // auto begin = list.begin();
    // auto end = list.end();
    // while (begin != end)
    // {
    //     sum += (*begin++);
    // }
    // 引用可以减少copy代理的性能消耗
    //如果对象非常大 这也是一个不小的开销
    for (const auto &v : list)
    {
        sum += v;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int sum_v = sum({1, 2, 3});
    cout << sum_v << endl;

    return 0;
}
