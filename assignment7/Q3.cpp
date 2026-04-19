#include <iostream>
#include <cmath>   
using namespace std;
double area(double base, double height) {
    return 0.5 * base * height;
}
double area(double side) {
    return (sqrt(3) / 4) * side * side;
}
double area(double equalSide, double base) {
    double height = sqrt(equalSide * equalSide - (base * base) / 4.0);
    return 0.5 * base * height;
}
int main() {
    double base = 6, height = 4;
    cout << "Right-angled triangle area = " << area(base, height) << endl;
    double side = 5;
    cout << "Equilateral triangle area = " << area(side) << endl;
    double equalSide = 7, baseIso = 6;
    cout << "Isosceles triangle area = " << area(equalSide, baseIso) << endl;
    return 0;
}
