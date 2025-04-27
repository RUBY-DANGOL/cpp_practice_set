#include <iostream>
using namespace std;
template<typename T> myMax(T x, T y){
    return (x > y) ? x : y;
}
int main(){
    cout << myMax<int>(5, 10) << endl;
    cout << myMax<double>(3.0,7.0)<<endl;
    cout << myMax<char>('g','e')<<endl;

    return 0;
}