#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

class DATEE
{
private:
    unsigned y;
    unsigned m;
    unsigned d;

public:
    DATEE(string y, string m, string d) : DATEE(stoi(y), stoi(m), stoi(d))
    {
    }
    DATEE(unsigned y, unsigned m, unsigned d) : y(y), m(m), d(d)
    {
    }
    operator string()
    {
        ostringstream ostr;
        ostr << y << "年" << m << "月" << d << "日";
        return ostr.str();
    }
};

int main(int argc, char const *argv[])
{
    DATEE d(2022, 12, 12);
    string ss = d;
    cout << ss << endl;
    return 0;
}
