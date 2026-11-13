#include <iostream>
#include <string>

using namespace std;
class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin >> ws, studentName);

        cout << "Enter Admission Number: ";
        cin >> admissionNumber;

        cout << "Enter Initial Fee Balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double paymentAmount;
        cout << "\nEnter amount to pay: ";
        cin >> paymentAmount;

        if (paymentAmount > 0) {
            if (paymentAmount <= feeBalance) {
                feeBalance -= paymentAmount;
                cout << "Payment of " << paymentAmount << " processed successfully.\n";
            } else {
                cout << "Error: Payment amount exceeds the current fee balance!\n";
            }
        } else {
            cout << "Invalid payment amount. Please enter a positive value.\n";
        }
    }

    void displayStatus() const {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Student Name    : " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Balance: " << feeBalance << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    Student myStudent;


    cout << "=== Enter Student Details ===" << endl;
    myStudent.inputStudent();
    myStudent.displayStatus();
    cout << "\n=== Fee Payment Processing ===" << endl;
    myStudent.makePayment();
    myStudent.displayStatus();

    return 0;
}
