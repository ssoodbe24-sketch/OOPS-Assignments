#include <iostream>
using namespace std;
class Rectangle {
private:
    float length, breadth;
public:
    void setData(float l, float b) {
        length = l;
        breadth = b;
    }
    float area() {
        return length * breadth;
    }
};
int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;
    Rectangle r[10];  
    for (int i = 0; i < n; i++) {
        float l, b;
        cout << "\nEnter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        r[i].setData(l, b);
    }
    cout << "\nAreas of rectangles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i + 1 << " Area = " << r[i].area() << endl;
    }
    return 0;
}
