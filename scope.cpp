#include<iostream>
int main() {
    std::string str("The scope of this variable is within the main() function.");
    std:: cout<< str<<std::endl;
    {
        std::string str("The scope of this variable is within this block, which ends at line 6.");
        std:: cout<< str<<std::endl;
    }
    std:: cout<< str<<std::endl;
}