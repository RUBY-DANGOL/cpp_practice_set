#inlcude <iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex(){
        real = 0;
        imag = 0;
    }
    void input(){
        cout<<"enter real and imaginary parts respectively: ";
        cin>>real;
        cin>>imag;
    }
    complex operator+(complex obj){
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag +obj.img;
        return temp;
    }
    void output(){
        cout << "output complex number: "<<real << "+"<< imag << "i";
    }
};
int main(){
    complex xomplex1, complex2,result;
    cout<< "enter first complex number : \n";
    co
}
