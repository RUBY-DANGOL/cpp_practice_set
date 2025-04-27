/*#include<iostream>
class num{
    int a;
    int b;
    public:
    num();
    void display();
};
num::num(){
    a=10;
    b=20;
}
void num:: display(){
    std::cout<<a<<std:: endl<< b<<std:: endl;
}
int main(){
    num n1;
    n1.display();
    num n2 = num();
    n2.display();
    return 0;
}*/
#include <iostream>

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex() {
            real = 0.0;
            imag = 0.0;
        }

        Complex(double r, double i) {
            real = r;
            imag = i;
        }

        void print() const {
            std::cout << "Complex number: " << real << " + " << imag << "i" << std::endl;
        }
};

int main() {
   
    Complex c1;
    c1.print();

    Complex c2(3.5, 2.5);
    c2.print();

    return 0;
}
