/*#include <iostream>
int generateID()
{
    static int s_id{ 0 };
    return ++s_id;
}
int main()
{
    std::cout << generateID () << '\n'; // Prints 1
    std::cout << generateID () << '\n'; // Prints 2
    std::cout << generateID() << '\n'; // Prints 3
}*/
/*#include <iostream>
class staticDemo{
    public:
    static int var;
};
int staticDemo::var =0;
int main(){
    staticDemo::var++;
    std::cout<< "static member data = "<< staticDemo:: var<< std:: endl;
    staticDemo:: var++;
    std::cout << "static member data = "<< staticDemo:: var<< std::endl;
}*/
#include<iostream>
using namespace std;
class employee{
    int id; 
    int static count;
}
public:
void setdata(){
    cout<< "enter the id of the employee: ";
    cin >> id;
    count++;
}
void getdata (){
    cout<< "the id of the employee is: "<< '\t'<< id<< endl;
    cout << ""
}