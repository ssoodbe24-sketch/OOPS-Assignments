#include <iostream>
using namespace std;
class Vehicle {
protected:
    string make, model;
    int year;
public:
    void setVehicle(string mk, string md, int y) {
        make = mk;
        model = md;
        year = y;
    }
    void showVehicle() {
        cout << "Make  : " << make << endl;
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
    }
};
class Truck : public Vehicle {
protected:
    float load_capacity;
public:
    void setTruck(float lc) {
        load_capacity = lc;
    }
    void showTruck() {
        showVehicle();
        cout << "Load Capacity : " << load_capacity << " tons" << endl;
    }
};
class RefrigeratedTruck : public Truck {
private:
    float temperature_control;
public:
    void setRefrigeratedTruck(float temp) {
        temperature_control = temp;
    }
    void showRefrigeratedTruck() {
        showTruck();
        cout << "Temperature Control : " << temperature_control << " °C" << endl;
    }
};
class Person {
protected:
    string name, address;
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
    cout << "\n=== MULTILEVEL INHERITANCE ===\n";
    RefrigeratedTruck rt;
    rt.setVehicle("Volvo", "FH16", 2022);
    rt.setTruck(18);
    rt.setRefrigeratedTruck(-10);
    rt.showRefrigeratedTruck();
    cout << "\n=== HYBRID INHERITANCE ===\n";
    TeachingAssistant ta;
    ta.setPerson("Anil", "Bangalore");
    ta.setStaff(1001, "Computer Science");
    ta.setStudent(501, "A");
    ta.showTA();
    return 0;
}
