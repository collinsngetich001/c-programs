#include <iostream>
#include <string>

using namespace std;

int main() {
    string customerName;
    string phoneModel;
    int quantityBought;
    double pricePerPhone;
    double totalSalesAmount;

    cout << "=== Mobile Phone Sales Receipt System ===" << endl;

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);

    cout << "Enter Quantity Bought: ";
    cin >> quantityBought;

    cout << "Enter Price Per Phone (KES): ";
    cin >> pricePerPhone;


    totalSalesAmount = quantityBought * pricePerPhone;

    cout << "\n\n";
    cout << "=========================================" << endl;
    cout << "          MOBILE SHOP - RUIRU            " << endl;
    cout << "             SALES RECEIPT               " << endl;
    cout << "=========================================" << endl;

    cout << "Customer Name:     " << customerName << endl;
    cout << "Phone Model:       " << phoneModel << endl;
    cout << "Quantity Bought:   " << quantityBought << endl;
    cout << "Price Per Phone:   KES " << pricePerPhone << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Total Sales Amount:KES " << totalSalesAmount << endl;
    cout << "=========================================" << endl;
    cout << "       Thank you for shopping with us!   " << endl;
    cout << "=========================================" << endl;

    return 0;
}
