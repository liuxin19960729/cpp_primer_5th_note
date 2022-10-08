
#include <iostream>

int main()
{
    float cc = 0.9999;
    double bb = 0.123456789;
    // std::cout << cc << std::endl;
    std::cout << bb << std::endl;

    signed char gg = 255;
    int ggint = gg;
    std::cout << ggint << std::endl;

    int i = 49;
    if (i)
    {
        std::cout << i << std::endl;
    }
}

/**5
 * 1.
 * int (最小16bits)  int>=short
 * long (最小32bits) long>=int
 * long long (64bits) c++11
 * unsigned 默认代表 unsigned int
 * unsigned 0  +
 * singed - 0 +
 *
 * c++标准规定最少5bit有效数组
 * float (1word==32bits) 7位有效数
 *
 * c++规定最少10bit有效数组
 * double (2 word) 16位有效数
 *
 * long double (3,4 word) 一般用于特殊硬件上
 *
 * 2.利率 4.50% 资金 854.36 支付 1, 142.36
 * 建议浮点数使用 double 计算效率差不多而且精度更加高
 *
 * 像上面这样的数字 使用float 也可以
 *

 */