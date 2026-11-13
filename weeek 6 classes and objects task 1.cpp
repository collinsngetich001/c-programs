#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int availableCopies;

public:
    void inputDetails() {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Number of Copies Available: ";
        cin >> availableCopies;

        // Clear input buffer
        cin.ignore();
    }
    void borrowBook() {
        if (availableCopies > 0) {
            availableCopies--;
            cout << "\n[Success] A copy of \"" << title << "\" has been borrowed.\n";
        } else {
            cout << "\n[Notice] Sorry, \"" << title << "\" is currently out of stock!\n";
        }
    }

    void displayDetails() const {
        cout << "\n--- Book Information ---" << endl;
        cout << "Title:   " << title << endl;
        cout << "Author:  " << author << endl;
        cout << "Copies:  " << availableCopies << endl;
        cout << "------------------------\n" << endl;
    }
};

int main() {

    Book myBook;

    cout << "=== Library Book Management System ===" << endl;

    cout << "\n[Step 1] Enter Book Details:" << endl;
    myBook.inputDetails();
    cout << "\n[Step 2] Displaying Initial Book Details:" << endl;
    myBook.displayDetails();
    cout << "[Step 3] Borrowing a book..." << endl;
    myBook.borrowBook();
    cout << "\n[Step 4] Displaying Updated Book Details:" << endl;
    myBook.displayDetails();

    return 0;
}
