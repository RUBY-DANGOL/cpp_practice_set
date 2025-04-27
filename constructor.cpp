#include<iostream>
class Point{
    private:
    double x,y;
    public:
    point();
    void print()
    {
        std::cout<<"x= "<<x<<",y= "<<y<<std:: endl;
    }
};
Point:: point()
{
    x=1;
    y=2;
}
int main()
{
    Point p1;
    p1.print();
    Point p2;
    p2.print();
    return 0;
}