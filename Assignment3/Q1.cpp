#include <iostream>
using namespace std;
class Student {
    int roll;
    float marks;
public:
    void setData(int roll, float marks) {
        this->roll = roll;    
        this->marks = marks;
    }
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main() {
    Student s1;
    s1.setData(101, 88.5);
    cout << "Using dot operator:" << endl;
    s1.display();
    cout << endl;
    Student *ptr;
    ptr = &s1;
    ptr->setData(102, 91.0);
    cout << "Using arrow operator:" << endl;
    ptr->display();
    return 0;
}
