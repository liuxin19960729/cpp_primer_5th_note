#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;//32 unsigned
    std::cout << u - u2 << std::endl;//4294967264 unsigned
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;//32
    //i 0x00 00 00 0A   i2=0x00 00 00 2A
    //         0000 1010
    //         0010 1010
    //result   1110 0000 -128+64+32=-32
    std::cout << i - i2 << std::endl;//-32
    // i会被编译器隐式转换为 unsigned 
    std::cout << i - u << std::endl;//0 unsigned
    // i会被编译器隐式转换为 unsigned 
    std::cout << u - i << std::endl;//0 unsigned

    return 0;
}
