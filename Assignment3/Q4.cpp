#include <iostream>
using namespace std;
class A;   
class B {
public:
    void show(A &obj);   
};
class A {
private:
    int x;
public:
    void setData(int a) {
        x = a;
    }
    friend class B;
};
void B::show(A &obj) {
    cout << "Private value of class A accessed by class B: " << obj.x << endl;
}
int main() {
    A objA;
    B objB;
    objA.setData(50);
    objB.show(objA);
    return 0;
}
