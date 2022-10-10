#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{

    char c = 'c';

    switch (c)
    {
    case 'c':
    {
        int ii;
        string str; //报错 会隐式的初始化
        cout << "c" << endl;
        break;
    }
    case 'g':
    
        break;
    }

    return 0;
}
