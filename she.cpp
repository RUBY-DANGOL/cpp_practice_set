// #include<iostream>
// int main()
// {
//     int a= 1;
//     int b(2);
//     int c(3);
//     int arr[4] = {10, 20, 30, 40};
//     std:: cout<< a<<'\\';
//     std:: cout<<"//";
//     std:: cout<< b<< '\t';
//     std:: cout<<c<< std::endl;
//     for(int b= 0; b<=3; b++){
//         std::cout<< b<<std:: endl;

//     }
// }
#include<iostream>
int main(){
    int y{7};
    int z{2};

    std::cout << "y & z = " << (y & z) << std::endl; 
    std::cout << "y | z = " << (y | z)<< std::endl<< (y ^ z) << std::endl; 
    std::cout << "y << 2 =" << (y << 2) << std::endl;
    std::cout << "y >> 2 =" << (y >> 2) << std::endl;
}