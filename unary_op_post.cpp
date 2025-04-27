#include <iostream>
using namespace std;
class count {
    private:
    int value;
    public:
    count(){
        value =5;
    }
    void operator ++ (int){
        value++;
    }
    void display(){
        cout<<"count: "<< value<<endl;
    }
};
int main (){
    count count1;
    count1++;
    count1.display();
    return 0;
}