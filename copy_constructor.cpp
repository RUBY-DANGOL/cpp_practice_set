#include<iostream>
using namespace std;
class num {
    int a;
    int b;
    public:
    num (int x, int y);
    num (num &n1);
    void display();
};
num :: num(int x, int y){
    a= x;
    b= y;
}
num:: num(num &n1){
    a = n1.a;
    b = n1.b;
}
void num:: display()
{
   cout << a << endl<< b<<endl;
}
main(){
    num n1(10,20);
    n1.display();
    num n2(n1);
    n2.display();
    num n3 = n1;
    n3.display();
}