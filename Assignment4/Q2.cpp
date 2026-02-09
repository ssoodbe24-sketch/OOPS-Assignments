 #include <iostream>
using namespace std;
class Rectangle {
private:
    float length, breadth;
public:
    Rectangle(float l = 0, float b = 0) {
        length = l;
        breadth = b;
        cout << "Constructor called (l = " << length
             << ", b = " << breadth << ")" << endl;
    }
    float area() {
        return length * breadth;
    }
    ~Rectangle() {
        cout << "Destructor called for rectangle with area "
             << area() << endl;
    }
};
int main() {
    Rectangle r[3] = {
        Rectangle(),       
        Rectangle(5),       
        Rectangle(4, 6)    
    };
    cout << "\nAreas of Rectangles:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << " Area = "
             << r[i].area() << endl;
    }
    return 0;
}
