#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string studentName;
    double theoryMarks;
    double practicalMarks;
    double averageScore;

    cout << "===========================================" << endl;
    cout << "  ROCKY DRIVING SCHOOL - TEST EVALUATION   " << endl;
    cout << "===========================================" << endl;

    cout << "Enter student's full name: ";
    getline(cin, studentName); // Using getline to accommodate full names with spaces

    cout << "Enter Theory test marks (out of 100): ";
    cin >> theoryMarks;

    cout << "Enter Practical test marks (out of 100): ";
    cin >> practicalMarks;

    averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << "\n-------------------------------------------" << endl;
    cout << "             TEST RESULTS REPORT           " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Student Name  : " << studentName << endl;
    cout << "Theory Marks  : " << theoryMarks << endl;
    cout << "Practical Mks : " << practicalMarks << endl;

    cout << fixed << setprecision(2);
    cout << "Average Score : " << averageScore << endl;

    cout << "Status        : ";
    if (averageScore >= 50.0) {
        cout << "PASSED" << endl;
    } else {
        cout << "FAILED" << endl;
    }
    cout << "-------------------------------------------" << endl;

    return 0;
}
