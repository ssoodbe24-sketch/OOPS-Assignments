#include <iostream>
using namespace std;
class Matrix {
private:
    int a[3][3];   
public:
    Matrix() {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                a[i][j] = 0;
    }
    void input() {
        cout << "Enter 3x3 matrix values:\n";
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin >> a[i][j];
            }
        }
    }
    void show() {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend Matrix operator*(Matrix m1, Matrix m2);
};
Matrix operator*(Matrix m1, Matrix m2) {
    Matrix result;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            result.a[i][j] = 0;
            for(int k=0; k<3; k++) {
                result.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }
    return result;
}
int main() {
    Matrix m1, m2, m3;
    cout << "Enter first matrix:\n";
    m1.input();
    cout << "Enter second matrix:\n";
    m2.input();
    m3 = m1 * m2;
    cout << "Resultant matrix after multiplication:\n";
    m3.show();
    return 0;
}
