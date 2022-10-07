#include<iostream>
int main(int argc, char const *argv[])
{
    std::cout<<"Hello ,World"<<std::endl;
    
    int a=0 ,b=0;
    std::cout<<"请输入两个数字:"<<std::endl;
    std::cin>>a>>b;
    std::cout<<a<<" * "<<b<<" = "<<(a*b)<<std::endl;
    std::cout<<a;
    std::cout<<" * ";
    std::cout<<b;
    std::cout<<" = ";
    std::cout<<(a*b);
    std::cout<<std::endl;

    return 0;
}

/**
 * 1."Hello ,World" 标准输出 
 *  std::cout<<"Hello ,World"<<std::endl;
 * 2.输入两个数字并求出两个数字的乘积
 *  int a=0 ,b=0;
    std::cout<<"请输入两个数字:"<<std::endl;
    std::cin>>a>>b;
    std::cout<<a<<" * "<<b<<" = "<<(a*b)<<std::endl;

//3.每个运算符对象单独放入一条独立的语句语句中
    std::cout<<a;
    std::cout<<" * ";
    std::cout<<b;
    std::cout<<" = ";
    std::cout<<(a*b);
    std::cout<<std::endl;


    //print
    Hello ,World
    请输入两个数字:
    1
    2
    1 * 2 = 2
    1 * 2 = 2

4.
 std:cout<<"1"<<"2";
        <<"3"<<"4";
        
;代表的是当前的表达式结束再下一行不能够继续的使用
修改:
  4.
 std:cout<<"1"<<"2"
        <<"3"<<"4";
        这样修改就能够继续使用

总结:
<< or >> 运算符的结果返回的是std::ostream 类型的cout or 
std::istream 类型的cin对象



 */