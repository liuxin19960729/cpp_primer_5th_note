#include <iostream>
// int i = 42;
int main(int argc, char const *argv[])
{
    // //1
    // int i = 100; //在该作用域下 i把全局的i变量覆盖
    // int j = i;
    // std::cout<<j<<std::endl;//print 100

    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++)//inner scoper i 覆盖 outer scoper i var
    {
        sum += i; // sum+1+2+3+....9
    }
    std::cout << sum << std::endl;

    return 0;
}
