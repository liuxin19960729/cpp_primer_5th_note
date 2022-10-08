#include <iostream>


int main(int argc, char const *argv[])
{
    // a pi int 类型指针 ,i int类型对象,r 绑定i的对象
    int *pi, i, &r = i;
    // b i int类型对象 ,ip int类型指针对象 并且是空指针
    int i, *ip = 0;
    // c ip int类型指针对象  ip2 int 类型对象
    int *ip, ip2;
    return 0;
}
