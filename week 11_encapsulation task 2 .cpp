#include <iostream>


using namespace std;


class Student {
private:

    string student_Name;
    string admission_Number;
    double fee_Balance;

public:

    void inputStudentData() {
        cout << "Enter Student Name: ";
        cin >> student_Name;

        cout << "Enter Admission Number: ";
        cin >> admission_Number;

        cout << "Enter Initial Fee Balance: ";
        cin >> fee_Balance;


        cin.ignore();
    }


    void makePayment(double amount) {
        if (amount > 0) {
            if (amount <= fee_Balance) {
                fee_Balance -= amount;
                cout << "\nPayment of " << amount << " processed successfully." << endl;
            } else {
                cout << "\nError: Payment amount exceeds current fee balance!" << endl;
            }
        } else {
            cout << "\nError: Invalid payment amount!" << endl;
        }
    }

    // Function to display student details and remaining balance
    void displayStatus() const {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Student Name     : " << student_Name << endl;
        cout << "Admission Number : " << admission_Number << endl;
        cout << "Remaining Balance: " << fee_Balance << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    Student myStudent;
    cout << "=== Enter Student Information ===" << endl;
    myStudent.inputStudentData();


    double paymentAmount;
    cout << "\nEnter fee payment amount to process: ";
    cin >> paymentAmount;
    myStudent.makePayment(paymentAmount);


    myStudent.displayStatus();

    return 0;
}
