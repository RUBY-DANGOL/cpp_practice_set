#include<iostream>
using namespace std;
class employee{
    private:
    int employeeID;
    string employeeName;
    int basicsalary;
    int netsalary;
    pubic:
    void calculate(){
        cout<< "enter the employeeID: ";
        cin>> employeeID;
        cout>> "enter the name: ";
        cin >> employeeName;
        cout<< "enter the salary: ";
        cin>> basicsalary;
        int DA = 0.5* basicsalary;
        int HRA = 400;
        int ITAX = 0.15* basicsalary;
        int netsalary = basicsalary + DA+HRA-ITAX;
    }
    void display(){
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Dearness Allowance (DA): " << DA << endl;
        cout << "House Rent Allowance (HRA): " << HRA << endl;
        cout << "Income Tax (I-tax): " << ITax << endl;
    
    }
};
int main(){
    employee em;
    em.calculate();
    em.display();
    return 0;
}