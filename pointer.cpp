// #include<iostream>
// int main()
// {
//     int arr[3];
//     int *ptr = arr;
//     arr[0]= 1;
//     std :: cout << arr[0]<< std :: endl;
//     *(ptr+1) = 2;
//     std:: cout<< arr[1]<< std :: endl;
//     *(ptr+2) = 3;
//     std :: cout << arr[2]<< std :: endl;
//     *(ptr+3) = 4;
//     std :: cout << arr[3]<< std :: endl;
//     std:: cout<< (ptr+1)<< std :: endl;
//     std :: cout << (ptr+2)<< std :: endl;
//     std :: cout << (ptr +1000)<< std:: endl;

// }
 
#include<iostream>
int main()
{
    int *pc, c;
    c=1;
    std:: cout<<"address of c: "<< &c<< std::endl;
    std::cout<< "value of c: "<< c<< std:: endl;

    pc = &c;
    std:: cout << "address of pointer pc: "<< pc<< std::endl;
    std:: cout<< "content of pointer pc: "<< *pc<< std:: endl;

    c=2;
    std:: cout<<"address of pointer pc: "<< pc<< std::endl;
    std::cout<< "content of pc: "<< *pc<< std:: endl;

    *pc = 3;
    std:: cout<<"address of c: "<< &c<< std::endl;
    std::cout<< "value of c: "<< c<< std:: endl;
    return 0;
}