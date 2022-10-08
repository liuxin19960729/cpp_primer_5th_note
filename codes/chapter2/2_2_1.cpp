#include <iostream>

std::string global_str; //""
int global_int;         // 0
int main(int argc, char const *argv[])
{

    std::string local_str; //"" 由于string含有默认初始化
    int local_int;        //系统分配数据值

    std::cout << "global_str: " << global_str << std::endl;
    std::cout << "global_int: " << global_int << std::endl;
    std::cout << "local_str: " << local_str << std::endl;
    std::cout << "local_int: " << local_int << std::endl;
    return 0;
}

/**
 * //std::cin>>int c;
 * 错误 在使用的时候  c 变量还未定义
 *
 * int i={3.14}; 发出信息损失的警告
 *  implicit conversion from 'double' to 'int'
 * changes value from 3.14 to 3 [-Wliteral-conversion]
 * {} 在编译期回检查是否有信息损失
 *
 * double salary=swage=9999.99;//错误在使用时还未定义 swage
 * //修改,先定义在赋值
 * double  swage=9999.9,salary=swage;
 *
 * int i =3.14 不会抛出警告  但是i=3 会损失精度
 */