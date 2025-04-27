 #include<iostream>
 #include <stdexcept>
 using namespace std;
 int main(){
    try{
        int num = 10;
        int den = 0;
        int res;

        if (den==0){
            throw runtime_error("Division by zero");
        }
        res = num/den;
        cout<<"result after division:"<<res<< endl;
    }
    catch (const exception& e){
        cout<<"exception"<<e.what()<<endl;
    }
    return 0;
       
 }