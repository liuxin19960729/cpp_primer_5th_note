#include <iostream>

void fn(const int *);
void fn(const int c[]);
void fn(const int c[10]);
int main(int argc, char const *argv[])
{

    return 0;
}

void fn(const int *) {}
void fn(const int c[]) {}
void fn(const int c[10]) {}