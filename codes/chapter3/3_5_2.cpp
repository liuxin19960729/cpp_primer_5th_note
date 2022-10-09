#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    // 1
    int arr[10];
    for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        arr[i] = i;
    }

    vector<int> ivv;

    for (auto i : arr)
    {
        ivv.push_back(i);
    }

    for (auto i : ivv)
    {
        cout << i << endl;
    }

    return 0;
}
