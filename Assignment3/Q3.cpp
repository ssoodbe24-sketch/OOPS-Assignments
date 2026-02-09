#include <iostream>
using namespace std;
class B;   
class A {
private:
    int x;
public:
    void setData(int a) {
        x = a;
    }
    friend int add(A, B);
};
class B {
private:
    int y;
public:
    void setData(int b) {
        y = b;
    }
    friend int add(A, B);
};
int add(A obj1, B obj2) {
    return obj1.x + obj2.y;
}
int main() {
    A objA;
    B objB;
    objA.setData(15);
    objB.setData(25);
    int sum = add(objA, objB);
    cout << "Sum of objects of class A and B: " << sum << endl;
    return 0;
}
