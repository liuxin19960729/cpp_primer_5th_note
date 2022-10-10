#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <iterator>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    vector<int> ivec(begin(arr), end(arr));
    auto size = ivec.size();
    int *arr_c = new int[ivec.size()];
    ssize_t i = 0;
    for (auto v : ivec)
    {
        cout << v << endl;
        arr_c[i] = v;
        i++;
    }

    for (i = 0; i < size; i++)
    {
        cout << arr_c[i] << endl;
    }

    return 0;
}
