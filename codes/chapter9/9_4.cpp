#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    int i = 0;
    // ivec.reserve(50);
    while (i <= 20)
    {
        cout << "size:" << ivec.size() << endl;
        cout << "capacity:" << ivec.capacity() << endl;
        ivec.push_back(100);
        i++;
    }

    return 0;
}

/**
 * 1.
 * size() 元素个数
 * capacity() 分配的内存可以存储元素的个数
 * 2.capacity 不可能小于size
 *
 * 
 * list:
 *   双链表  不是连续存储的内存空间  不能一次分配一块很大的区域
 *   双链表 好回收内存空间  易于 在任何 插入 删除
 * array:
 *   固定大小 需要持续分配 
 * 
 * 0 1 2 4 8 ....
 * 2^n 来进行分配
 */