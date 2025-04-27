#include<iostream>
int swap(int &a, int &b)
{
    int temp = a;
    a= b;
    b= temp;
}
int main(){
    int c, d;
    std :: cout<<"enter a number: ";
    std:: cin>>c; 
    std:: cout<< "enter another number";
    std:: cin >> d;
    std:: cout<<"before swapping";
    std ::cout<<"1st"<<c<<"2nd"<<d<< std:: ends;
    std:: cout<<"swapping..";
    std:: cout<<".";
    std:: cout<<".";
    std:: cout<<".";
    std:: cout<<".";
    swap(c,d);
    std ::cout<<"1st"<<c<<"2nd"<<d<< std:: ends;
}