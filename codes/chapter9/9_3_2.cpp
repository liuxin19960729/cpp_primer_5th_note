#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>
#include <sstream>
#include <string>
#include <forward_list>
using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> ivec;
    // auto &fot = ivec.front();//zsh: segmentation fault  ./a.out
    // cout << fot << endl;
    // cout << ivec[0] << endl;
    // cout << *ivec.begin() << endl;
    // cout << ivec.at(0) << endl;//throw out of range
    forward_list<string> stack;
    string word;
    while (cin >> word)
    {
        if (word == "quit" || word == "exit")
        {
            break;
        }

        stack.push_front(word);
    }
    while (!stack.empty())
    {
        string s = stack.front();
        cout << s << endl;
        stack.pop_front();
    }

    return 0;
}
