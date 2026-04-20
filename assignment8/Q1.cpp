#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;  
    a = b;        
    b = temp;     
}
int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;
    double p = 3.14, q = 2.71;
    cout << "\nBefore swap: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swap:  p = " << p << ", q = " << q << endl;
    char c1 = 'A', c2 = 'B';
    cout << "\nBefore swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap:  c1 = " << c1 << ", c2 = " << c2 << endl;
    return 0;
}
