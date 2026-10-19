#include <iostream>

using namespace std;

int main() {
    double accountBalance;
    double withdrawalAmount;

    cout << "=== Mobile Money Savings Withdrawal System ===" << endl;

    cout << "Enter initial account balance: KSh ";
    cin >> accountBalance;

    cout << "\nStarting Account Balance: KSh " << accountBalance << endl;
    cout << "----------------------------------------" << endl;

    while (accountBalance > 0) {
        cout << "\nEnter amount to withdraw (or enter 0 to stop): KSh ";
        cin >> withdrawalAmount;

        if (withdrawalAmount == 0) {
            cout << "Transaction stopped by the customer." << endl;
            break;
        }

        if (withdrawalAmount > accountBalance) {
            cout << "[Error] Insufficient funds! Withdrawal amount exceeds current balance (KSh " << accountBalance << ")." << endl;
            cout << "Exiting withdrawal system." << endl;
            break; // Stop the loop
        }

        accountBalance -= withdrawalAmount;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining Balance: KSh " << accountBalance << endl;
        cout << "----------------------------------------" << endl;


        if (accountBalance == 0) {
            cout << "Your account balance has reached zero (0). Exiting system." << endl;
            break;
        }
    }

    cout << "\n=== Thank you for using our system! ===" << endl;
    cout << "Final Account Balance: KSh " << accountBalance << endl;

    return 0;
}
