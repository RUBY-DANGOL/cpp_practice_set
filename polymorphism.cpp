// #include<iostream>
// using namespace std;
// //function overloading 
// class  A{
//     public:
//     void  display(int a){
//         cout<<"display(int)"<< endl;
//     }
//     void display(double a){
//         cout<<"display(double)"<< endl;
//     }
//     void display(){
//         cout<<"display()"<<endl;
//     }
// };
// int main() {
//     A obj;
//     obj.display();
//     obj.display(10);
//     obj.display(6.5);
// }   
// #include<iostream>
// using namespace std;
// //operator overloading
// class complex{
//     private:
//     int real;
//     int imaginary;
//     public:
//     complex(int r=0, int i=0){
//         real = r;
//         imaginary = i;
//     }
//     public:
//     complex operator + (complex const  &obj){
//         complex res;
//         res.real = real+ obj.real;
//         res.imaginary= imaginary +  obj.imaginary;
//         return res;
//     }
//     public:
//     void display(){
//         cout<< real << "+" << imaginary<< "i"<<endl;
//     }
// };
// int main(){
//     complex c1(5,7);
//     complex c2(3,2);
//     complex c3 = c1 + c2;
//     c3.display();
// }

#include <iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"Base class"<<endl;
    }
};
class derived : public base{
    public:
    void display(){
        cout<<"Derived class"<<endl;
        base:: display();

    }    
};
int main(){
    // base *b;
    // derived d;
    // b= &d;
    // b -> display();
    derived d;
    d.display();
}
 