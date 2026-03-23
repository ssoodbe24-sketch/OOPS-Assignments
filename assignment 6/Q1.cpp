#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    string ISBN;
};
class Library {
private:
    Book books[100];
    int count;

public:
    Library() {
        count = 0;
    }
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 100) {
            return false;
        }
        this->books[count].title = title;
        this->books[count].author = author;
        this->books[count].ISBN = ISBN;

        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails() {
        if (count == 0) {
            cout << "No books in library\n";
            return;
        }

        for (int i = 0; i < count; i++) {
            cout << "Book " << i + 1 << ":\n";
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
            cout << "---------------------\n";
        }
    }
};

bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {

        
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }

            count--;
            return true;
        }
    }
    return false;
}
int main() {
    Library lib;
    string t1 = "C++ Basics", a1 = "Bjarne", i1 = "101";
    string t2 = "Data Structures", a2 = "Mark", i2 = "102";
    string t3 = "Algorithms", a3 = "CLRS", i3 = "103";
    string t4 = "Operating Systems", a4 = "Galvin", i4 = "104";
    string t5 = "Computer Networks", a5 = "Tanenbaum", i5 = "105";
    lib.addNewBook(t1, a1, i1);
    lib.addNewBook(t2, a2, i2);
    lib.addNewBook(t3, a3, i3);
    lib.addNewBook(t4, a4, i4);
    lib.addNewBook(t5, a5, i5);
    cout << "\n--- Library after adding books ---\n";
    lib.displayDetails();
    string removeISBN = "103";
    if (lib.removeBooks(removeISBN)) {
        cout << "\nBook with ISBN " << removeISBN << " removed successfully.\n";
    } else {
        cout << "\nBook not found.\n";
    }
    cout << "\n--- Library after removal ---\n";
    lib.displayDetails();

    return 0;
}
