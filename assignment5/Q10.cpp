#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    string address;
public:
    void setPerson(string n, string a) {
        name = n;
        address = a;
    }
    void showPerson() {
        cout << "Name    : " << name << endl;
        cout << "Address : " << address << endl;
    }
};
class Staff : virtual public Person {
protected:
    int employee_id;
    string department;

public:
    void setStaff(int id, string dept) {
        employee_id = id;
        department = dept;
    }
    void showStaff() {
        cout << "Employee ID : " << employee_id << endl;
        cout << "Department  : " << department << endl;
    }
};
class Student : virtual public Person {
protected:
    int student_id;
    string grade;
public:
    void setStudent(int id, string g) {
        student_id = id;
        grade = g;
    }

    void showStudent() {
        cout << "Student ID : " << student_id << endl;
        cout << "Grade      : " << grade << endl;
    }
};
class TeachingAssistant : public Staff, public Student {
public:
    void showTA() {
        showPerson();
        showStaff();
        showStudent();
    }
};
int main() {
    TeachingAssistant ta;
    ta.setPerson("Anil", "Bangalore");
    ta.setStaff(501, "Computer Science");
    ta.setStudent(301, "A");
    cout << "\n--- Teaching Assistant Details ---\n";
    ta.showTA();
    return 0;
}
