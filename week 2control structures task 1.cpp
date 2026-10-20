#include <iostream>

using namespace std;

int main() {
    string studentName;
    int marks;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered! Please enter a value between 0 and 100." << endl;
        return 1;
    }

    char grade;

    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    }
    else {
        grade = 'E'; // Below 40
    }

    cout << "\n----------------------------------------" << endl;
    cout << "          STUDENT GRADING REPORT        " << endl;
    cout << "----------------------------------------" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Exam Marks   : " << marks << endl;
    cout << "Grade        : " << grade << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
