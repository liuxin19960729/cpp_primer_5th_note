#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <iterator>
using namespace std;

void print_arr(int *arr, size_t size)
{
    cout << "arr"
         << "[";
    char c = ',';
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i == size - 1)
            break;
        cout << ",";
    }

    cout << "]" << endl;
}

int main(int argc, char const *argv[])
{
    // int arr[] = {1, 2, 3};

    // auto size = end(arr) - begin(arr);
    // print_arr(arr, size);
    // for (size_t i = 0; i < size; i++)
    // {
    //     arr[i] = 0;
    // }

    // print_arr(arr, size);

    // compar arr

    int arr[] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 2};
    // if (arr == arr2)
    // {
    //     cout << "相等" << endl;
    // }
    // else
    // {
        auto size1 = end(arr) - begin(arr);
        auto size2 = end(arr2) - begin(arr2);
        if (size1 == size2)
        {
            bool equal = true;
            for (size_t i = 0; i < size1; i++)
            {
                if (arr[i] != arr2[i])
                {
                    equal = false;
                    break;
                }
            }
            string str = (equal) ? "相等" : "不相等";
            cout << str << endl;
        }
        else
        {
            cout << "不相等" << endl;
        }
    // }


    

    return 0;
}
