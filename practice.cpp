// #include<iostream>
// #include<stdexcept>
// using namespace std;
// int main(){
//     int num = 10;
//     int den = 0;
//     int res;
//     try{
//         if(den==0){
//             throw runtime_error("divion by zero");
//         }
//         res= num/den;
//         cout<<"the value is:"<< res<<endl;
//     }
//     catch(const exception& e){
//         cout<<"exception "<<e.what()<<endl;
//     }
// }
#include <iostream>
#include<stdexcept>
using namespace std;
int num;
int den;
int res;
int main(){
    cout<<"enter the numinator: "<<endl;
    cin>> num;
    cout<<"enter the denomination"<<endl;
    cin>> den;
    try{
        if(den==0){
            throw runtime_error("divion by zero");
        }
        res = num/den;
        cout<<"the value is: "<<res<<endl;
    }
    catch(const exception& e){
        cout<<"exception "<<e.what()<<endl;
    }
}
