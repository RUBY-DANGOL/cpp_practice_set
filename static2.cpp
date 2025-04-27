#include <iostream>
class staticdemo{
    private:
    static int var;
    public:
    static int getstaticvar();
};
int staticdemo:: var = 0;
int staticdemo:: getstaticvar(){
    staticdemo :: var++;
    return staticdemo:: var;
}
int main(){
    std::cout<<"static member data= "<<staticdemo::getstaticvar()<< std::endl;
    std::cout<<"static member data = "<<staticdemo :: getstaticvar()<< std:: endl;
}