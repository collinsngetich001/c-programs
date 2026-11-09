#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        cout << "Enter Vehicle Brand: ";
        getline(cin, brand);
        cout << "Enter Year of Manufacture: ";
        cin >> yearOfManufacture;
        cin.ignore();
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();
        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
        cout << "Enter Engine Capacity (L): ";
        cin >> engineCapacity;
    }
    void displayCar() {
        cout << "\n--- Car Details ---" << endl;
        displayVehicle();
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << " L" << endl;
    }
};

int main() {
    Car carObj;

    cout << "=== Enter Car Information ===" << endl;
    carObj.inputCar();

    carObj.displayCar();

    return 0;
}
