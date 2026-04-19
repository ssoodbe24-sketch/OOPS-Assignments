#include<iostream>
using namespace std;
class Shape {
public:
    virtual void area() {
        cout << "Area not defined" << endl;
    }
    virtual void display() {
        cout << "This is a shape" << endl;
    }
};
class Circle : public Shape {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }
    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
    void display() {
        cout << "Shape: Circle" << endl;
    }
};
class Rectangle : public Shape {
    int l, b;
public:
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }
    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
    void display() {
        cout << "Shape: Rectangle" << endl;
    }
};
class Triangle : public Shape {
    int b, h;
public:
    Triangle(int x, int y) {
        b = x;
        h = y;
    }
    void area() {
        cout << "Area of Triangle = " << (b * h) / 2 << endl;
    }
    void display() {
        cout << "Shape: Triangle" << endl;
    }
};
int main() {
    Shape *s;   
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 8);
    s = &c;
    s->display();
    s->area();
    s = &r;
    s->display();
    s->area();
    s = &t;
    s->display();
    s->area();
    return 0;
}
