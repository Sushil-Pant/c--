#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

const int MAX_BOOKS = 100;
Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Library is full!\n";
        return;
    }
    Book newBook;
    newBook.id = bookCount + 1;
    cin.ignore(); // Clear input buffer
    cout << "Enter book title: ";
    getline(cin, newBook.title);
    cout << "Enter author name: ";
    getline(cin, newBook.author);
    newBook.isIssued = false;
    library[bookCount++] = newBook;
    cout << "Book added successfully!\n";
}

void displayBooks() {
    cout << "\nLibrary Books:\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "ID: " << library[i].id
             << ", Title: " << library[i].title
             << ", Author: " << library[i].author
             << ", Status: " << (library[i].isIssued ? "Issued" : "Available") << endl;
    }
}

void issueBook() {
    int id;
    cout << "Enter book ID to issue: ";
    cin >> id;
    if (id <= 0 || id > bookCount || library[id - 1].isIssued) {
        cout << "Book not available.\n";
    } else {
        library[id - 1].isIssued = true;
        cout << "Book issued successfully!\n";
    }
}

void returnBook() {
    int id;
    cout << "Enter book ID to return: ";
    cin >> id;
    if (id <= 0 || id > bookCount || !library[id - 1].isIssued) {
        cout << "Invalid book ID.\n";
    } else {
        library[id - 1].isIssued = false;
        cout << "Book returned successfully!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. Display Books\n3. Issue Book\n4. Return Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    return 0;
}