#include <iostream>
#include <string>

using namespace std;
class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double accountBalance;

public:
    BankAccount(string name, string accNum, double balance) {
        accountHolderName = name;
        accountNumber = accNum;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }
    void displayAccount() const {
        cout << "\n--- Bank Account Details ---" << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "Account Balance     : " << accountBalance << endl;
        cout << "----------------------------" << endl;
    }

    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    BankAccount myAccount("Alice Johnson", "ACC100234", 5000.50);

    myAccount.displayAccount();

    return 0;
}
