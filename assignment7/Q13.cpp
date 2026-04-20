#include <iostream>
#include <cmath>  
using namespace std;
class Polar {
private:
    float r;
    float theta; 
public:
    Polar(float radius = 0, float angle = 0) {
        r = radius;
        theta = angle;
    }
    friend class Cartesian;
};
class Cartesian {
private:
    float x, y;
public:
    Cartesian(float xVal = 0, float yVal = 0) {
        x = xVal;
        y = yVal;
    }
    Cartesian(Polar p) {
        x = p.r * cos(p.theta);  
        y = p.r * sin(p.theta);  
    }
    void show() {
        cout << "Cartesian Coordinates: (" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Polar p(10, 5);
    Cartesian c = p;
    c.show();
    return 0;
}
