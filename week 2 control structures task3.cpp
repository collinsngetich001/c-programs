#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    bool validOperation = true;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "\nError: Division by zero is not allowed!" << endl;
                validOperation = false;
            }
            break;

        default:
            cout << "\nError: Invalid operator entered!" << endl;
            validOperation = false;
            break;
    }


    if (validOperation) {
        cout << "\n----------------------------------------" << endl;
        cout << "           CALCULATOR REPORT            " << endl;
        cout << "----------------------------------------" << endl;
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
        cout << "----------------------------------------" << endl;
    }

    return 0;
}
