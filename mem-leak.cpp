/*#include<iostream>
int square(int num)
{
    int * ptr = new int(num);
    int r = (*ptr)*(*ptr);
    return r;
}
int main()
{
    int s = square(100);
    std :: cout<< s;
}*/

#include<iostream>
int square(int num)
{
    int * ptr = new int(num);
    int r = (*ptr)*(*ptr);
    delete ptr; //deallocatinh mem_address
    return r;
}// delete pointers prevents memory leak
int main() 
{
    int s = square(100);
    std :: cout<< s;
}