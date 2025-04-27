#include<iostream>
using namespace std;
class call{
    public:
    void display(){
        cout<<"this is from class1"<< endl;
    }
};
class call1: call public{
    public:
    void out(){
        cout<<"this the class 2"<<endl;
    }
};
int main(){
    call1 c;
    c.display();
}