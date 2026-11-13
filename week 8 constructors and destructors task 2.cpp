#include <iostream>
#include <string>

using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDaysBooked;

public:
    RoomBooking(string name, int roomNum, int days) {
        guestName = name;
        roomNumber = roomNum;
        numberOfDaysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    void displayBooking() const {
        cout << "\n--- Room Booking Details ---" << endl;
        cout << "Guest Name         : " << guestName << endl;
        cout << "Room Number        : " << roomNumber << endl;
        cout << "Days Booked        : " << numberOfDaysBooked << endl;
        cout << "----------------------------" << endl;
    }

    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    RoomBooking myBooking("Gift Joan", 305, 4);

    myBooking.displayBooking();

    return 0;
}
