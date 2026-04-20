#include <iostream>
#include <vector>
using namespace std;
class Numbers {
private:
    vector<int> values;  
public:
    void operator()(initializer_list<int> args) {
        values.clear();   
        for (int val : args) {
            values.push_back(val);
        }
    }
    void show() {
        cout << "Stored numbers: ";
        for (int val : values) {
            cout << val << " ";
        }
        cout << endl;
    }
};
int main() {
    Numbers obj;
    obj({10, 20, 30, 40});
    obj.show();
    obj({5, 15, 25});
    obj.show();
    obj({100});
    obj.show();
    return 0;
}
