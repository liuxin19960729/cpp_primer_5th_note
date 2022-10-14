#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

class DD
{
private:
    /* data */
public:
    int a = 100;
    int b = 200;
};

int main(int argc, char const *argv[])
{
    DD dd;
    cout << dd.a << endl;
    cout << dd.b << endl;
    char *pdd = reinterpret_cast<char *>(&dd);

    char aaa[sizeof(DD)];

    copy(pdd, pdd + sizeof(DD) - 1, aaa);

    DD *zz= reinterpret_cast<DD *>(aaa);
    for (size_t i = 0; i < sizeof(DD); i++)
    {
       if (aaa[i]==100)
       {
            aaa[i]=126;
       }
       
    }
    
    cout << zz->a << endl;
    cout << zz->b << endl;
    return 0;
}
