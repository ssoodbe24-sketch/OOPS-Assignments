#include<iostream>
using namespace std;
class B;   
class A {
    int x;
public:
    A(int a) {
        x = a;
    }
    friend void add(A, B);
};
class B {
    int y;
public:
    B(int b) {
        y = b;
    }
    friend void add(A, B);
};
void add(A obj1, B obj2) {
    int sum = obj1.x + obj2.y;
    cout << "Sum = " << sum;
}
int main() {
    A obj1(10);
    B obj2(20);
    add(obj1, obj2);
    return 0;
}
