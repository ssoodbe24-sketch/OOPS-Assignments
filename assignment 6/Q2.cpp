#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    string ISBN;
    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }
    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library {
private:
    Book books[100];
    int count;

public:
    Library() {
        count = 0;
    }

    bool addNewBook(string title, string author, string ISBN) {
        if (count >= 100) return false;

        books[count] = Book(title, author, ISBN);
        count++;
        return true;
    }

    bool removeBooks(string ISBN) {
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

    void displayDetails() {
        if (count == 0) {
            cout << "No books available\n";
            return;
        }

        for (int i = 0; i < count; i++) {
            cout << "\nBook " << i + 1 << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
        }
    }
};

int main() {

    Book b1("C++", "Bjarne", "101");
    Book b2("DSA", "Mark", "102");

    Book b3 = b1;

    Library lib;

    lib.addNewBook("Algorithms", "CLRS", "103");
    lib.addNewBook("OS", "Galvin", "104");
    lib.addNewBook("Networks", "Tanenbaum", "105");
    lib.addNewBook("DBMS", "Korth", "106");
    lib.addNewBook("AI", "Russell", "107");

    cout << "\n--- Library after adding books ---\n";
    lib.displayDetails();

    if (lib.removeBooks("105")) {
        cout << "\nBook removed successfully\n";
    } else {
        cout << "\nBook not found\n";
    }

    cout << "\n--- Library after removal ---\n";
    lib.displayDetails();

    return 0;
}
