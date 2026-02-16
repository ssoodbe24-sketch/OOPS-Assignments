#include <iostream>
using namespace std;
class Base {
public:
    int a;
protected:
    int b;
private:
    int c;
public:
    void setValues() {
        a = 10;
        b = 20;
        c = 30;
    }
};
class DerivedPublic : public Base {
public:
    void show() {
        cout << "\nPublic Inheritance:" << endl;
        cout << "a = " << a << endl;   
        cout << "b = " << b << endl;   
    }
};
class DerivedProtected : protected Base {
public:
    void show() {
        cout << "\nProtected Inheritance:" << endl;
        cout << "a = " << a << endl;   
        cout << "b = " << b << endl;   
    }
};
class DerivedPrivate : private Base {
public:
    void show() {
        cout << "\nPrivate Inheritance:" << endl;
        cout << "a = " << a << endl;   
        cout << "b = " << b << endl;   
    }
};
int main() {
    DerivedPublic dp;
    dp.setValues();
    dp.show();
    cout << "Accessing a from main (Public): " << dp.a << endl;
    DerivedProtected dpr;
    dpr.setValues();
    dpr.show();
    DerivedPrivate dpt;
    dpt.setValues();
    dpt.show();
    return 0;
}
