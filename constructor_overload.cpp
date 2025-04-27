#include <iostream>
using namespace std;
class num{
    int a;
    int b;
    public:
    num();
    num(int x, int y);
    num(int x, int y, int z);
    num (num &n);
    void display(){
    cout<< a<< '\t'<< b<< endl;
    }
};
    num:: num(){
        a= 10; b= 20;
    }
    num :: num(int x, int y){
        a=x;
        b=y;
    }
    num :: num (int x, int y , int z){
        a= x;
        b= y+z;
    }
    num :: num (num &n){
        a= n.a;
        b= n.b;
    }
main(){
    num n1;
    num n2(30,40);
    num n3(100,200,300);
    num n4(n2);
    n1.display();
    n2.display();
    n3.display();
    n4.display();
}
