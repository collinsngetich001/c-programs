#include <iostream>
using namespace std;

class Employee {
private:
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    void setEmployeeDetails() {
        cout << "Enter Employee Name: ";
        getline(cin >> ws, employeeName);

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    double calculateSalary() const {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails() const {
        cout << "\n===============================\n";
        cout << "       EMPLOYEE DETAILS        \n";
        cout << "===============================\n";
        cout << "Employee Name: " << employeeName << "\n";
        cout << "Employee ID  : " << employeeID << "\n";
        cout << "Basic Salary : $" << basicSalary << "\n";
        cout << "Net Salary   : $" << calculateSalary() << "\n";
        cout << "===============================\n";
    }
};

int main() {
    Employee emp;

    cout << "--- Input Employee Information ---\n";
    emp.setEmployeeDetails();

    emp.displayEmployeeDetails();

    return 0;
}
