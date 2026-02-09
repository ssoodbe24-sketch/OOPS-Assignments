#include <iostream>
using namespace std;
class Rectangle {
private:
    float length, breadth;
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    Rectangle(float x) {
        length = x;
        breadth = x;
    }
    float area() {
        return length * breadth;
    }
};
int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);
    cout << "Area of rectangle r1 (no parameter) = " << r1.area() << endl;
    cout << "Area of rectangle r2 (one parameter) = " << r2.area() << endl;
    cout << "Area of rectangle r3 (two parameters) = " << r3.area() << endl;
    return 0;
}
