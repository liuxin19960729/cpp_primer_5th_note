#include <iostream>

int main(int argc, char const *argv[])
{ // 1
  // std::string st = typeid('a').name() == typeid(char).name() ? "true" : "fase";
  // std::cout << "\'a\'=="
  //           << "char is:" << st << std::endl; // char

    // st = typeid(L'a').name() == typeid(wchar_t).name() ? "true" : "fase";
    // std::cout << "L\'a\'=="
    //           << "wchar_t is:" << st << std::endl; // wchar_t

    // st = typeid("a").name() == typeid(char[2]).name() ? "true" : "fase";
    // std::cout << "\"a\"=="
    //           << "char[2] is:" << st << std::endl; //字符数组 两个元素

    // st = typeid(L"a").name() == typeid(wchar_t[2]).name() ? "true" : "fase";
    // std::cout << "L\"a\"=="
    //           << "wchar_t[2] is:" << st << std::endl; // wchar_t类型字符数组 两个元素

    // /**
    //  * 10进制默认情况下是带符号的
    //  * int ,long ,long long 那个装的下就是那个
    //  *
    //  */
    // st = typeid(10).name() == typeid(int).name() ? "true" : "fase";
    // std::cout << "10=="
    //           << "int is:" << st << std::endl; // int 默认

    // st = typeid(10u).name() == typeid(unsigned int).name() ? "true" : "fase";
    // std::cout << "10u=="
    //           << "unsigned int is:" << st << std::endl;

    // st = typeid(10L).name() == typeid(long).name() ? "true" : "fase";
    // std::cout << "10l=="
    //           << "long is:" << st << std::endl;
    // st = typeid(10uL).name() == typeid(unsigned long).name() ? "true" : "fase";
    // std::cout << "10ul=="
    //           << "unsigned long is:" << st << std::endl;
    // /*
    //    10进制可能带符号也可能不带符号
    //    int uint  long ulong  long long  u long long 那个装的下就是那个
    // */
    // st = typeid(012).name() == typeid(int).name() ? "true" : "fase";
    // std::cout << "012=="
    //           << "unsigned int is:" << st << std::endl;
    // st = typeid(0xc).name() == typeid(int).name() ? "true" : "fase";
    // std::cout << "0xc=="
    //           << "unsigned int is:" << st << std::endl;

    // //3.14 默认长量double
    // std::cout<<typeid(3.13).name()<<std::endl;//double
    // std::cout<<typeid(3.13f).name()<<std::endl;//float
    // std::cout<<typeid(3.13l).name()<<std::endl;//long double

    // //10进制 有符号 默认从int开始 能装下
    // std::cout<<typeid(10).name()<<std::endl;
    // //10进制 u ,unsiged int  unsigned long unsinged long long
    // std::cout<<(typeid(10u).name()==typeid(unsigned int).name())<<std::endl;//unsigned int 能装下
    // //表示10.0 默认double
    // std::cout<<typeid(10.).name()<<std::endl;//double
    // //10*0.01 =0.1  double 类型
    // std::cout<<typeid(10e-2).name()<<std::endl;//double


    // //2
    // int month = 9, day = 7;
    // // int month=09,day=7;//error 8 进制 等于8 进一位
    // int month2 = 011, day2 = 7; //修改为

    // std::cout << "month: " << month << " day: " << day << std::endl;
    // std::cout << "month2: " << month2 << " day:2 " << day2 << std::endl;

   
    //3
    // a "ssss" 字符数组类型 char[]
    // b3.14e1L long double 
    //std::cout<<(typeid(3.14e1L).name()==typeid(long double).name())<<std::endl;
    //1024F 非法数字常量 10进制整肃不能使用 F float 符号
    // std::cout<<typeid(1024F).name()<<std::endl;
    //3.14 L long double
    

    //4
    std::cout<<"2M\n"
            <<"2\tM"<<std::endl;///t横制表符号
    return 0;
}
