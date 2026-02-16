#include <iostream>
using namespace std;
class LibraryUser {
protected:
    string name;
    int id;
    string contact;
public:
    void getUserDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Contact: ";
        cin >> contact;
    }
    void showUserDetails() {
        cout << "Name    : " << name << endl;
        cout << "ID      : " << id << endl;
        cout << "Contact : " << contact << endl;
    }
};
class Student : public LibraryUser {
private:
    string grade;

public:
    void getStudentDetails() {
        getUserDetails();   
        cout << "Enter Grade Level: ";
        cin >> grade;
    }
    void showStudentDetails() {
        showUserDetails();  
        cout << "Grade   : " << grade << endl;
    }
};
class Teacher : public LibraryUser {
private:
    string department;
public:
    void getTeacherDetails() {
        getUserDetails();  
        cout << "Enter Department: ";
        cin >> department;
    }
    void showTeacherDetails() {
        showUserDetails();  
        cout << "Department: " << department << endl;
    }
};
int main() {
    Student s;
    Teacher t;
    cout << "\n--- Student Details ---\n";
    s.getStudentDetails();
    s.showStudentDetails();
    cout << "\n--- Teacher Details ---\n";
    t.getTeacherDetails();
    t.showTeacherDetails();
    return 0;
}
