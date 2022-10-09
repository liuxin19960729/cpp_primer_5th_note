#include <iostream>


int main(int argc, char const *argv[])
{
    const int i = 100;
    std::string str("s");
    return 0;
}
// 1
/*
int a=3,b=4;
decltype(a) c=a;//int c=3
decltype((b)) d=a;d int & 绑定 a

++c;//a d=3 c=4 b=4
++d;//d a=4,b=4  c=4;

*/

// 2
/*
int a = 3, b = 6;
double g = 100.0;
decltype(a) c = a;
decltype(a = g) d = a; //= 是 int &
decltype(g = a) d = g; //= 是 double &

注意 = 引用类型是左值的类型
a=g a类型 是int 所有是 int&类型
g=a g 是 double 所以是 double &类型
*/

/*
decltype 和 auto 区别

1. decltype 表达式 推断
 例 int a=100; decltype(a) c=100;
     decltype(a+1) c=100;
auto 初始化值推断

int j=100;
auto cc=j;cc int  编译器根据  j值推断

2.const int c=100,&rc=c;
2-1
auto j =c;auto 忽略 顶层const
decltype(c) gg=100; decltype不忽略 顶层const
2-2

auto j=rc;//int 类型
decltype(rc) j=c; int & 类型

3.
decltypt((x)) 引用
decltype(x) x是引用就是引用不是引用就不是引用

4.auto *p =nullptr
 decltye(*p) g=a; 解引用操作 的类型会被解析为引用

举例：

相同

const int i=a;

auto &c=i;cont int &
decltype((i)) c=100; const int &


*/