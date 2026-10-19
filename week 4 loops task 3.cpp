#include <iostream>
#include <string>

using namespace std;

int main() {
    const string CORRECT_USERNAME = "admin123";
    const string CORRECT_PASSWORD = "securePassword";

    string enteredUsername;
    string enteredPassword;

    cout << "=== Secure System Login ===" << endl;

    do {
        cout << "\nEnter username: ";
        cin >> enteredUsername;

        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredUsername == CORRECT_USERNAME && enteredPassword == CORRECT_PASSWORD) {
            cout << "\nAccess Granted" << endl;
            break; // Exit the loop on success
        } else {
            cout << "\nIncorrect credentials, try again." << endl;
        }

    } while (true);

    cout << "Welcome to the system services!" << endl;

    return 0;
}
