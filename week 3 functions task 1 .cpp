#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string employeeName;
double basicSalary, overtimeHours, ratePerHour;
double overtimePay, netSalary;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

double calculateOvertimePay() {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary() {
    overtimePay = calculateOvertimePay();
    return basicSalary + overtimePay;
}

// Function to display the payslip
void displayPayslip() {
    cout << "\n====================================\n";
    cout << "           EMPLOYEE PAYSLIP\n";
    cout << "====================================\n";
    cout << fixed << setprecision(2);

    cout << "Employee Name   : " << employeeName << endl;
    cout << "Basic Salary    : " << basicSalary << endl;
    cout << "Overtime Hours  : " << overtimeHours << endl;
    cout << "Rate Per Hour   : " << ratePerHour << endl;
    cout << "Overtime Pay    : " << overtimePay << endl;
    cout << "Net Salary      : " << netSalary << endl;

    cout << "====================================\n";
}

int main() {
    getEmployeeDetails();

    overtimePay = calculateOvertimePay();
    netSalary = calculateNetSalary();

    displayPayslip();

    return 0;
}
