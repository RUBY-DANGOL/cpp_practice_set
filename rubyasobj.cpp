#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    float marks;
    public:
    void insertdata(string a, int b, float c){
    name = a;
    roll = b;
    marks = c;
    }
  
    void displaydata()
    {
        cout<<"name = "<< name<< "\n";
        cout<<"roll = "<< roll<< "\n";
        cout << "marks = "<< marks<< "\n";
    }
};
int main() {
    student ruby;


    ruby.insertdata("RUBY", 1, 95.5);

    
    ruby.displaydata();

    return 0;
}