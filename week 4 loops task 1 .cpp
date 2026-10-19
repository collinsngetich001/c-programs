#include <iostream>

using namespace std;

int main() {
    string employeeName;
    double basicSalary;
    double bonus;
    double totalSalary;

    cout << "=== Employee Bonus System Report ===" << endl;
    cout << "Please enter details for 5 employees:\n" << endl;

    for (int i = 1; i <= 5; ++i) {
        cout << "--- Employee " << i << " ---" << endl;


        cout << "Enter employee name: ";
        getline(cin, employeeName);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;

        totalSalary = basicSalary + bonus;

        cout << "\n[Report for " << employeeName << "]" << endl;
        cout << "Basic Salary : KSh " << basicSalary << endl;
        cout << "Bonus (5%)   : KSh " << bonus << endl;
        cout << "Total Salary : KSh " << totalSalary << endl;
        cout << "----------------------------------------\n" << endl;
    }

    return 0;
}
