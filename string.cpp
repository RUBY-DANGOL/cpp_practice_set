#include<iostream>
#include<string>
int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string str3 = str1 + " " + str2;
    std::cout << "Length of str3 = " << str3.length() << std::endl;
}