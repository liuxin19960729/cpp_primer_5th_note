#include <iostream>


int main(int argc, char const *argv[])
{
    // const int buf; const 变量必须初始化
    int cnt = 0;
    const int sz = cnt; //争取
    cnt++;
    // sz++; 常量值不能进行修改
    //int &gg = sz; 常量的引用必须加 const修饰
    
    int c=100,*p=&c;
    decltype(p) z=nullptr;//z指针类型
    decltype(*p+c) refz;//int

    return 0;
}
