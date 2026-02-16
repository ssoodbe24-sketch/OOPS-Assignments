#include <iostream>
using namespace std;
class Book {
protected:
    string title;
    string author;
    float price;
public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }
    void displayBook() {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
    }
};
class Textbook : public Book {
private:
    string subject;
public:
    Textbook(string t, string a, float p, string s)
        : Book(t, a, p)  
    {
        subject = s;
    }
    void displayTextbook() {
        displayBook();   
        cout << "Subject: " << subject << endl;
    }
};
int main() {
    cout << "\nGeneral Book Details\n";
    Book b("C++ Programming", "Bjarne", 450);
    b.displayBook();
    cout << "\nTextbook Details\n";
    Textbook tb("Data Structures", "Sahni", 600, "Computer Science");
    tb.displayTextbook();
    return 0;
}
