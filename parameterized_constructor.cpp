/*#include<iostream>
class num{
    int a;
    int b;
    public :
    num(int x,int y);
    void display();
};
num:: num(int x, int y){
    a=x;
    b=y;
}
void num::display()
{
    std:: cout <<a<<std::endl<<b<<std::endl;
}
int main(){
    num n1(10,20);
    n1.display();
    num n2(30,40);
    n2.display();
    return 0;   
}*/
// #include <iostream>

// class Complex {
//     private:
//         double real;
//         double imag;
//     public:
//         Complex(double r, double i) {
//             real = r;
//             imag = i;
//         }

//         void print() const {
//             std::cout << "Complex number: " << real << " + " << imag << "i" << std::endl;
//         }
// };

// int main() {
//     Complex c1(3.0, 4.0);
//     c1.print();

//     Complex c2(5.5, 2.5);
//     c2.print();

//     return 0;
// }
/*#include <iostream>
#include <cmath>
using namespace std;
class point{
    int x, y;
    friend void distance(point p, point q);
    public:
    point (int a, int b){
        x=a;
        y= b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

};
void distance (point p, point q){
    float dist ;
    dist= sqrt(pow(p.x-q.x,2)+ pow(p.y-q.y,2));
    cout<< dist<<endl;
}
int main()
{
    point p(1,1);
    p.display();
    point q(2,2);
    q.display();
    distance(p,q);
}*/
#inlcude <iostream>
using namespace std;
class complex{
    double real, double imag;
    friend void addcomplex(complex r, complex i);
    public:
    complex(double re, double im){
        real = re;
        imag = im;
    }
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
};
void addcomplex(complex r, complex i){
    double sum1, sum2;
    sum1 = r+ real;
    sum2 = i+imag;
    cout << sum1 << " + " << sum2 << "i" << endl;
}
int main(){
    
}