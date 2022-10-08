#include <iostream>

int main(int argc, char const *argv[])
{
    // // 1
    // int ival = 1.01; //合法 但是ival会损失精度 1
    // //int &rvall = 1.01;//errno 左引用只绑定左值
    // int &rival=ival;//合法
    // //int &rival3; 引用必须绑定对象

    // //2
    // int i=0,&r1=i;//i 变量  rl 绑定 i对象的引用
    // double d=0,&r2=d;
    // //a
    // r2=3.123;//合法 对r2绑定d对象赋值
    // //b
    // r2=r1;//合法 r1获取绑定的i对象的值给r2绑定d赋值
    // //c
    // i=r2;
    // //d
    // r1=d;

    // 3
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << "--" << ri << std::endl;//10--10
    return 0;
}
