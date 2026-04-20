#include <iostream>
#include <fstream>
using namespace std;
class Student {
private:
   char name[30];
   int age;
public:
    void input() {
      cout << "Enter name: ";
      cin >> name;
   cout << "Enter age: ";
    cin >> age;
    }
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1, s2;
    ofstream outFile("student.dat", ios::binary);
    s1.input();
      outFile.write((char*)&s1, sizeof(s1));
    outFile.close();
    ifstream inFile("student.dat", ios::binary);
     inFile.read((char*)&s2, sizeof(s2));
    inFile.close();
      cout << "Data read from file:" << endl;
    s2.show();
    return 0;
}
