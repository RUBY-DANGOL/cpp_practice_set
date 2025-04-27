#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"this animal is eating:"<< endl;

    }
};
class dog:public animal{
    public:
    void bark(){
        cout<< "dog is barking."<<endl;
    }
};
int main(){
    dog mydog;
    mydog.eat();
    mydog.bark();
    return 0;
}