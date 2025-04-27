#include <iostream>

using namespace std;
class animal{
    public:
    void eat(){
        cout<<"this animal eats!"<<endl;
    }
};
class pet{
    public:
    void friendly(){
        cout<<"this animal is friendly!"<<endl;
    }
};
class dog: public animal, public pet{
    public:
    void bark(){
        cout<<"my dog barks!"<<endl;
    }
};
int main(){
    dog mydog;
    mydog.eat();
    mydog.friendly();
    mydog.bark();
    return 0;
}