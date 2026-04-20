#include <iostream>
using namespace std;
class Test {
private:
    float value;   
public:
    Test(float v = 0.0) {
        value = v;
    }
    operator float() {
        return value; 
    }
    void show() {
        cout << "Stored value = " << value << endl;
    }
};
int main() {
    Test t1(12.34);
    t1.show();
    float f = t1;  
    cout << "Converted object to float: " << f << endl;
    return 0;
}
