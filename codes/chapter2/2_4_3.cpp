#include <iostream>

int main(int argc, char const *argv[])
{
    int c = 100;
    const int *pc = &c;
    //int *p1 = pc;
    return 0;
}


/*
const int v2=0;顶层const
既不是顶层也不是底层
int v1=v2;

既不是顶层也不是底层
int *p1=&v1,&r1=v1;
p2底层const,p3顶层const *p3 底层 cons,r3底层(任何引言都是底层)
const int *p2=&v2,*const p3=&i,&r2=v2;



r1=v2;不合法 r1是引用 引用不能赋值
p1=p2;不合法 p2 执行 v2 是const ,p1也实现v2 然而不是const
p2=p1;合法
p1=p3;不合法 底层const 不相同
p2=p3;合法
*/