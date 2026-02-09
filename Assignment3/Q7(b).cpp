#include <iostream>
using namespace std;
class Number {
public:
    int x;
    void setData(int a) {
        x = a;
    }
    void show() {
        cout << "Value of x = " << x << endl;
    }
};
Number increment(Number &obj) {
    obj.x = obj.x + 10;
    return obj;
}
int main() {
    Number n1, n2;
    n1.setData(20);
    cout << "Before function call:" << endl;
    n1.show();
    n2 = increment(n1);
    cout << "\nAfter function call:" << endl;
    cout << "Original object: ";
    n1.show();
    cout << "Returned object: ";
    n2.show();
    return 0;
}
