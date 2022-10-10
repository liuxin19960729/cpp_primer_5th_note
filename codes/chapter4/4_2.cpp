#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int c = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    // 12/3=4  4*4=16  |  75| 0/2=0
    // 16+75+0=91
    cout << c << endl; // 91 正确

    // i%2==0 | 1 判断奇偶

    //溢出
    unsigned char d = 0xff;
    d = d + 1;
    cout << d << endl; // 0

 
    return 0;
}
