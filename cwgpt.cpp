#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    double basicSalary;

public:
    // Function to set the employee details
    void setEmployeeDetails(int id, const string& name, double salary) {
        employeeID = id;
        employeeName = name;
        basicSalary = salary;
    }

    // Function to calculate net salary and other components
    double calculate(double& DA, double& HRA, double& ITax) {
        DA = 0.25 * basicSalary; // 25% of basic salary
        HRA = 400;               // Fixed HRA
        ITax = 0.15 * basicSalary; // 15% of basic salary
        return basicSalary + DA + HRA - ITax; // Net Salary
    }

    // Function to display employee pay slip
    void display() {
        double DA, HRA, ITax, netSalary;
        netSalary = calculate(DA, HRA, ITax);

        cout << "Employee Pay Slip" << endl;
        cout << "-----------------" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Dearness Allowance (DA): " << DA << endl;
        cout << "House Rent Allowance (HRA): " << HRA << endl;
        cout << "Income Tax (I-tax): " << ITax << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    // Create an object of Employee class
    Employee emp;

    // Set the employee details
    int id;
    string name;
    double salary;

    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin.ignore(); // To ignore the newline character left by cin
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> salary;

    emp.setEmployeeDetails(id, name, salary);

    // Display the employee pay slip
    emp.display();

    return 0;
}
