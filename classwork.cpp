/*#include <iostream>
using namespace std;
class room {
    public:
    int length;
    int breath;
    int height;
    int area(){
        return length*breath;
    }
    float volume(){
        return length* breath* height;
    }
};
int main(){
    room r;
    cout<< "Enter the length of the room in meter : ";
    cin>> r.length;
    cout << "Enter the breath of the room in meter: ";
    cin >> r.breath;
    cout << "Enter the height of the room in meter: ";
    cin>> r.height;
    cout << "The area of the room is: " << r.area() << " square meter" << endl;
    cout << "The volume of the room is: " << r.volume() << " cubic meter " <<endl;
    return 0;
}*/
#include<iostream>
#include <string>
using namespace std;
class employee{
    private:
        int employeeID;
        string employeeName;
        int basicsalary;
    pubic:
    void setdetails(){
        cout<< "ID: ";
        cin>> employeeID;
        cout << "name: ";
        cin>> employeeName;
        cout<< "salary: ";
        cin>>basicsalary;
    }
    int calculate(){
        int DA = 0.5* basicsalary;
        int HRA = 400;
        int ITAX = 0.15* basicsalary;
        return basicsalary + DA+HRA-ITAX;
    }
    void display(){
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Dearness Allowance (DA): " << DA << endl;
        cout << "House Rent Allowance (HRA): " << HRA << endl;
        cout << "Income Tax (I-tax): " << ITax << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};
int main(){
    employee em;
    em.setdetails();
    int netsalary = em.calculate();
    em.display();
    return 0;
}