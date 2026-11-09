#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Class: ";
        getline(cin, studentClass);
    }
    void displayStudent() {
        cout << "\n--- Student Details ---" << endl;
        displayPerson();
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student studentObj;
    cout << "=== Enter Student Information ===" << endl;
    studentObj.inputStudent();

    studentObj.displayStudent();

    return 0;
}
