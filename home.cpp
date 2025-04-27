//stating with basic program
/*#include<iostream>
using namespace std;

int main(){
    cout<<"every age has a language of it's own\n";
    return 0;
}*/
//functions are one of the fundamental building block of C++.
//the first program consists almost entirely of a single function called main().
//to declare a function you need parenthesis(example: main())
//w/o it the compiler would think that main refers to a variable 
//braces 
// white spaces are ignored
/*#include<iostream>
using namespace std;
int main (){
    cout
    <<
    "every age has a language of its own\n"
    ;return
    0
    ;
}*/
//we can also use directive
//example:
/*#include<iostream>
int main(){
    std::cout<<"every age has a language of its own";
    return 0;
}*/
//in 32 bit system, such as windows, an int and float occupies 4 bytes
//char stores 1 byte(eight bits)
//for character constant : ' '
//for string constant : " "
/*#include<iostream>
using namespace std;

int main(){
    char charvar1 = 'A'; //define char variable as character 
    char charvar2 = '\n';//define char variable as tab

    cout<< charvar1;
    cout << charvar2;
    charvar1 = 'B';
    cout << charvar1;
    cout << '\n';
    return 0;
}*/
//taking input using cin
/*#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<"enter the temperature in fahrenheit: ";
    cin >> f;
    int c = (f-32)*5/9;
    cout << "equivalent in celsius is: "<< c<< endl;
    return 0;
}*/
//cascading ->  '<<', '>>' these symbols can be cascaded in cout and cin. 
//sample code (for fun)
/*#include <iostream>
using namespace std;
int add(int a, int b){
    int sum;
    sum= a+b;
    return(sum);
}
int sub(int a, int b){
    int sub;
    sub= a-b;
    return(sub);
}
int multi(int a, int b){
    int multi;
    multi = a*b;
    return(multi);
}
int main(){
    char u;
    cout <<"enter m or multiple, a for addition, s for substraction: ";
    cin>> u;
    int g, c;
    cout << "enter a number: ";
    cin>> g;
    cout<< "enter another number: ";
    cin>> c;
    if(u == 'm'){
        cout<<"multiple= "<< multi(g,c)<< endl;
    }
    else if(u == 'a'){
        cout<< "add= " << add(g,c)<< endl;
    }
    else if(u == 's'){
        cout<<"sub= " << sub(g,c)<< endl;
    }
    else{
        cout<< "not valid"<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int count = 10;
    cout << "count= "<< count << endl;
    cout << "count= "<< ++count << endl;
    cout << "count= "<< count << endl;
}*/
//lets talk about library function