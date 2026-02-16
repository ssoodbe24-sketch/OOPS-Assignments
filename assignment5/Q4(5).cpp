#include <iostream>
using namespace std;
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};
class B : public A {
};
class C : public A {
};
class D : public B, public C {
};
int main() {
    D obj;
    obj.B::showA();   
    obj.C::showA();
    return 0;
}
