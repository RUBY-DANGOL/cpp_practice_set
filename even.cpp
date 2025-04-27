#include<iostream>
int main(){
    int i, flag;
    std::cout<<"first five even number:\n";
    for(i=0; i<10; i++)
    {
        flag = i %2;

        if(flag== 0){
            std:: cout<<i;
        }
        
    }
    
}