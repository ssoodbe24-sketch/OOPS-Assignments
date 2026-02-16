#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
private:
    int rollNo;
public:
    void getStudentData() {
        getPersonData(); 
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void showStudentData() {
        showPersonData(); 
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main() {
    Person p;     
    Student s;    
    cout << "\n--- Person Details ---\n";
    p.getPersonData();
    p.showPersonData();

    cout << "\n--- Student Details ---\n";
    s.getStudentData();
    s.showStudentData();

    return 0;
}
