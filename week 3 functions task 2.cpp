#include <iostream>

using namespace std;

const double RATE_PER_UNIT = 50.0;

void getCustomerDetails(string &name, double &unitsConsumed);
double calculateBill(double unitsConsumed);
double applyDiscount(double totalBill, double unitsConsumed);
void displayBill(string name, double unitsConsumed, double totalBill, double discount, double finalAmount);

int main() {
    // Declare variables to hold customer details and billing information
    string customerName;
    double unitsConsumed;
    double totalBill;
    double discount;
    double finalAmount;

    cout << "=== Water Billing System Calculation ===" << endl;

    // Call functions in a logical sequence
    getCustomerDetails(customerName, unitsConsumed);

    totalBill = calculateBill(unitsConsumed);

    discount = applyDiscount(totalBill, unitsConsumed);

    finalAmount = totalBill - discount;

    displayBill(customerName, unitsConsumed, totalBill, discount, finalAmount);

    return 0;
}

// i. Function to get customer details via user input (using pass-by-reference)
void getCustomerDetails(string &name, double &unitsConsumed) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of units consumed: ";
    cin >> unitsConsumed;
}
double calculateBill(double unitsConsumed) {
    return unitsConsumed * RATE_PER_UNIT;
}

double applyDiscount(double totalBill, double unitsConsumed) {
    if (unitsConsumed > 100) {
        return totalBill * 0.10; // 10% discount
    }
    return 0.0; // No discount
}

void displayBill(string name, double unitsConsumed, double totalBill, double discount, double finalAmount) {
    cout << "\n========================================" << endl;
    cout << "           WATER SUPPLY BILL            " << endl;
    cout << "========================================" << endl;
    cout << "Customer Name    : " << name << endl;
    cout << "Units Consumed   : " << unitsConsumed << " units" << endl;
    cout << "Rate Per Unit    : KSh " << RATE_PER_UNIT << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Bill       : KSh " << totalBill << endl;
    cout << "Discount Applied : KSh " << discount << endl;
    cout << "----------------------------------------" << endl;
    cout << "Final Amount Due : KSh " << finalAmount << endl;
    cout << "========================================" << endl;
}
