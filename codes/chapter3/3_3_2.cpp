#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int index = 5;
    vector<int> ivec;
    int i = 0;
    while (index > 0)
    {
        cin >> i;
        ivec.push_back(i);
        index--;
    }

    for (auto v : ivec)
    {
        cout << v << endl;
    }
    return 0;
}
