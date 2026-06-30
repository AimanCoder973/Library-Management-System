#include <iostream>
using namespace std;

class Library {
private:
    int bookID;
    string bookName;
    string author;

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void displayBook() {
        cout << "\nBook ID: " << bookID;
        cout << "\nBook Name: " << bookName;
        cout << "\nAuthor: " << author << endl;
    }
};

int main() {
    Library book;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Book";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                book.addBook();
                break;

            case 2:
                book.displayBook();
                break;

            case 3:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}
