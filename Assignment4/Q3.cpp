#include <iostream>
using namespace std;
class Sample {
public:
    Sample() {
        cout << "Constructor called" << endl;
    }
    ~Sample() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    cout << "Inside main function" << endl;
    Sample obj; 
    cout << "End of main function" << endl;
    return 0;
}
