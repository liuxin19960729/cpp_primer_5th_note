#include<iostream>

int main(int argc, char const *argv[])
{
    
    return 0;
}
//1
/*
int i=0,&r=i;
auto a=r;//r的引用的对象类型是int 为int 类型

const int ci=i,&cr=ci;
auto b=ci;//b int
auto c=cr;//c int
auto d=&i;//int *
auto e=&ci;//const int *

auto &g=ci;//const int 

a=42;正确
b=42;正确
c=42;正确
d=42;错误 指正不允许 int 类型赋值
e=42;错误 指正不允许 int 类型赋值
g=42;const 不允许修改
*/
//3
/**
 * const int i=42;
 * auto j=i;//j int
 * const auto &k=i; auto int 
 * auto *p=&i; auto const int 
 * const auto j2=i,&k2=i;
 * j int 
 * k2 int 
 * 
 */
