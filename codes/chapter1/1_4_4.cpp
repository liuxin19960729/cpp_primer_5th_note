#include <iostream>

int main(int argc, char const *argv[])
{
    int cnt = 0, cuvalue = 0, val = 0;
    if (std::cin >> val)
    {
        cnt++;
        while (std::cin >> cuvalue)
        {

            if (val != cuvalue)
            {
                std::cout << val << ":" << cnt << std::endl;
                cnt = 1;
                val=cuvalue;
            }
            else
            {
                cnt++;
            }
        }
          std::cout << val << ":" << cnt << std::endl;
    }

    return 0;
}

/**
 * 1.
 *
 *
 */
