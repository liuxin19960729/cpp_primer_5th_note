#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cerr << "a.out filename" << endl;
        return -1;
    }

    string filename(argv[1]);
    ifstream input(filename);
    vector<string> context;
    if (!input)
    {
        cerr << filename << "open faild" << endl;
        return -1;
    }
    //每一行
    // string line;
    // while (getline(input, line))
    // {
    //     context.push_back(line);
    // }
    //每一个单词
    string word;
    while (input >> word)
    {
        context.push_back(word);
    }

    for (const auto &line : context)
    {

        cout << line << endl;
    }
    return 0;
}
