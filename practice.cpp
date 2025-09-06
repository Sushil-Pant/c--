#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title, author, publisher;
};

struct Member {
    string name, dob, gender, contact, email, address, cityState;
    string joinDate, renewalDate, expiryDate;
};

struct Issue {
    int issueID, bookID;
    string bookTitle, memberName, issueDate, dueDate;
    string returnDate, renewalDate;
    float lateFee;
};

void addBook() {
    Book b;
    cout << "Enter Book ID: "; cin >> b.id;
    cin.ignore();
    cout << "Enter Title: "; getline(cin, b.title);
    cout << "Enter Author: "; getline(cin, b.author);
    cout << "Enter Publisher: "; getline(cin, b.publisher);

    ofstream fout("books.txt", ios::app);
    fout << b.id << "|" << b.title << "|" << b.author << "|" << b.publisher << "\n";
    fout.close();
    cout << "Book added successfully!\n";
}

void deleteBook() {
    int id; cout << "Enter Book ID to delete: "; cin >> id;
    ifstream fin("books.txt");
    ofstream temp("temp.txt");
    string line; bool found = false;
    while (getline(fin, line)) {
        if (stoi(line.substr(0, line.find('|'))) != id)
            temp << line << "\n";
        else {
            found = true;
            cout << "Book deleted.\n";
        }
    }
    fin.close(); temp.close();
    remove("books.txt"); rename("temp.txt", "books.txt");
    if (!found) cout << "Book not found.\n";
}

void addMember() {
    Member m;
    cin.ignore();
    cout << "Full Name: "; getline(cin, m.name);
    cout << "Date of Birth: "; getline(cin, m.dob);
    cout << "Gender: "; getline(cin, m.gender);
    cout << "Contact Number: "; getline(cin, m.contact);
    cout << "Email: "; getline(cin, m.email);
    cout << "Address: "; getline(cin, m.address);
    cout << "City, State: "; getline(cin, m.cityState);
    cout << "Join Date: "; getline(cin, m.joinDate);
    cout << "Renewal Date: "; getline(cin, m.renewalDate);
    cout << "Expiry Date: "; getline(cin, m.expiryDate);

    ofstream fout("members.txt", ios::app);
    fout << m.name << "|" << m.dob << "|" << m.gender << "|" << m.contact << "|" 
         << m.email << "|" << m.address << "|" << m.cityState << "|" 
         << m.joinDate << "|" << m.renewalDate << "|" << m.expiryDate << "\n";
    fout.close();
    cout << "Member added successfully!\n";
}

void issueBook() {
    Issue i;
    cout << "Issue ID: "; cin >> i.issueID;
    cout << "Book ID: "; cin >> i.bookID;
    cin.ignore();
    cout << "Book Title: "; getline(cin, i.bookTitle);
    cout << "Member Name: "; getline(cin, i.memberName);
    cout << "Issue Date: "; getline(cin, i.issueDate);
    cout << "Due Date: "; getline(cin, i.dueDate);

    ofstream fout("issues.txt", ios::app);
    fout << i.issueID << "|" << i.bookID << "|" << i.bookTitle << "|" 
         << i.memberName << "|" << i.issueDate << "|" << i.dueDate << "\n";
    fout.close();
    cout << "Book issued successfully!\n";
}

void returnBook() {
    Issue i;
    cin.ignore();
    cout << "Return Date: "; getline(cin, i.returnDate);
    cout << "Late Fee: "; cin >> i.lateFee;

    ofstream fout("returns.txt", ios::app);
    fout << i.returnDate << "|" << i.lateFee << "\n";
    fout.close();
    cout << "Book return recorded.\n";
}

void renewBook() {
    Issue i;
    cin.ignore();
    cout << "Renewal Date: "; getline(cin, i.renewalDate);
    cout << "New Due Date: "; getline(cin, i.dueDate);

    ofstream fout("renewals.txt", ios::app);
    fout << i.renewalDate << "|" << i.dueDate << "\n";
    fout.close();
    cout << "Book renewed successfully!\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n2. Delete Book\n3. Add Member\n4. Issue Book\n5. Return Book\n6. Renew Book\n0. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: addBook(); break;
            case 2: deleteBook(); break;
            case 3: addMember(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: renewBook(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
    return 0;
}