#include<iostream>

int main(int argc, char const *argv[])
{
    
    return 0;
}
//1
/*
int i=-1,&r=0;
引用不成引用常量 左引用只能引用变量

const int i=-1,&r=0;
//编译器回生成零时变量
const int temp=0;
const int &r=temp
正确 常量引用可以直接值引用


const int &const r2;
错误 r2不是对象只是别名 所以不能使用 const r2,

*/

//2
/*
int i,*const cp;
int 类型 i 
cp:int 指针类型常量 不合法 const 指针定义必须初始化


int *p1,*const p2;
p1:int 指针类型
p2 int 常量指针 不合法常量指针定义必须初始化
.....
*/

//3