#include <iostream>
using namespace std;
class count {
    private:
    int value;
    public:
    count(){
        value=5;
    }
    count operator ++(){
        count temp;
        temp.value = ++value;
        return temp;
    }
    count operator ++(){
        count temp;
        temp.value = value++;
        return temp;
    }
    void display(){
        cout<< "count: "<<value << endl;
    }
};
int main (){
    count count1, count2, result;
    result = ++ count1;
    result.display();
    result = count2 ++;
    result.display();
}