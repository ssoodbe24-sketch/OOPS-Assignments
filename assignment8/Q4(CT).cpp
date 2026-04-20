#include <iostream>
using namespace std;
template <typename T>
class Arithmetic {
private:
    T a, b;
public:
    Arithmetic(T x, T y) {
        a = x;
        b = y;
    }
    void add() { cout << "Sum = " << a + b << endl; }
    void subtract() { cout << "Difference = " << a - b << endl; }
    void multiply() { cout << "Product = " << a * b << endl; }
    void divide() { 
        if(b != 0) cout << "Quotient = " << a / b << endl;
        else cout << "Division by zero not allowed!" << endl;
    }
};
int main() {
    Arithmetic<int> obj1(20, 10);
    obj1.add();
    obj1.subtract();
    obj1.multiply();
    obj1.divide();
    Arithmetic<double> obj2(5.5, 2.2);
    obj2.add();
    obj2.divide();
    return 0;
}
