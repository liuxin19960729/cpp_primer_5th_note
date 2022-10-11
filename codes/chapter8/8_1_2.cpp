#include <iostream>
using namespace std;

istream &process_cin(istream &in)
{
    cout << "输入100 退出" << endl;
    int c = 0;
    string str;
    auto state = in.rdstate();
    char eof = 'z';
    while (c != 100)
    {
        in >> c;
        if (!in.good()) //错误
        {
            if (in.eof())
            {
                cout << "eof" << endl;
                in.clear(state);
                break;
            }
            else if (in.fail())
            {
                // in.clear(); //清除错误状态
                in.clear(state);
                cout << "fail" << endl;
                cin >> str;
                cout << "输入错误:" << str << endl;
            }
            else
            {
                cout << "bad" << endl;
            }
        }
        else
        {
            cout << c << endl;
        }
    }
    cout << "退出" << endl;
    // in.setstate(state | istream::eofbit); // reset
    return in;
}
int main(int argc, char const *argv[])
{

    process_cin(cin);
    cout << cin.good() << endl;
    int i = 100;
    cin >> i;
    cout << i << endl;

    //clear() 复位  setState 设置状态并不会恢复状态
    return 0;
}
