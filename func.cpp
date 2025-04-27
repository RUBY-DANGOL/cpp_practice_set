#include<iostream>
int func1(int a)
{
    return a/2;
}
int func2(int a)
{
    return a*2;
}
int main()
{
    int (*F)(int);
    F = func1;
    std :: cout << F(100)<< std :: endl;
    F = func2;
    std :: cout << F(100)<< std :: endl;
}
