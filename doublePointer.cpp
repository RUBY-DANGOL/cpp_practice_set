#include <iostream>
using namespace std;
int main()
{
    int var = 789;
    int *ptr2;
    int **ptr1;
    ptr2 = &var;
    ptr1= &ptr2;

    cout<<"value of var = "<<var<<endl;
    cout<< "value of var using single pointer = "<< *ptr2<<endl;
    cout << "value of var using double pointer = "<< **ptr1<< endl;

    cout<< "address of var = "<<&var<<endl;
    cout<<"address of single pointer = "<<ptr2<<endl;
    cout <<"address of double pointer = "<< ptr1<< endl;
}