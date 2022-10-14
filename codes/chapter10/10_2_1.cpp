#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivect(10, 100);
    auto result = accumulate(ivect.cbegin(), ivect.cend(), 10000);
    cout << result << endl;
    vector<double> dvect(10, 1.1);
    // int double 转换为int
    int r2 = accumulate(dvect.cbegin(), dvect.cend(), 10000);
    cout << r2 << endl;

    char pc1[] = "liuxin";
    char pc2[] = "liuxin";
    char *maxpc = strlen(pc1) >= strlen(pc2) ? pc1 : pc2;
    char *minpc = strlen(pc1) < strlen(pc2) ? pc1 : pc2;
    bool rpc = equal(minpc, (minpc + strlen(minpc)), maxpc);
    cout << rpc << endl;
    return 0;
}
