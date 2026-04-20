#include <iostream>
#include <string>
using namespace std;
class Test {
private:
    float value;   
public:
    Test(float v = 0.0) {
        value = v;
    }
    friend istream& operator>>(istream& in, Test& t) {
        cout << "Enter a float value: ";
        in >> t.value;
        return in;
    }
    friend ostream& operator<<(ostream& out, const Test& t) {
        out << "Stored value = " << t.value;
        return out;
    }
    Test(const float& f) {
        value = f;
    }
};
int main() {
    Test t1;
    cin >> t1;       
    cout << t1 << endl; 
    float f = 12.34;
    Test t2 = f;    
    cout << "Converted float to object: " << t2 << endl;
    return 0;
}
