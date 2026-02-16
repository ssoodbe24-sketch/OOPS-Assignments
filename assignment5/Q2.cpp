#include <iostream>
using namespace std;
class Base {
protected:
    int x;  
public:
    void setX(int value) {
        x = value;
    }
};
class Derived : public Base {
public:
    void showX() {
        cout << "Value of protected variable x: " << x << endl;
    }
};
int main() {
    Base b;      
    Derived d;    
    b.setX(5);    
    d.setX(10);   
    cout << "\nUsing Derived class object:\n";
    d.showX();   
    return 0;
}
