#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "";
        age = 0;
    }
    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter student name: ";
        in >> s.name;
        cout << "Enter student age: ";
        in >> s.age;
        return in;
    }
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Student Name: " << s.name << ", Age: " << s.age;
        return out;
    }
};
int main() {
    Student s1;
    cin >> s1;
    cout << s1 << endl;
    return 0;
}
