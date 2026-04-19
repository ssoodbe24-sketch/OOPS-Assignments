#include <iostream>
#include <string>
using namespace std;
class STRING {
private:
    string str;  
public:
    STRING(string s = "") {
        str = s;
    }
    void show() {
        cout << str << endl;
    }
    STRING operator+(STRING s2) {
        return STRING(str + s2.str);  
    }
    bool operator==(STRING s2) {
        return str == s2.str;
    }
};
int main() {
    STRING s1("Hello");
    STRING s2("World");
    STRING s3;
    s3 = s1 + s2;
    cout << "Concatenated string: ";
    s3.show();
    if (s1 == s2) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    return 0;
}
