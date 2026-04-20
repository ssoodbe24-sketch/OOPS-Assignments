#include <iostream>
using namespace std;
template <typename T>
void process(T a) {
    cout << "Processing single parameter: " << a << endl;
}
template <typename T>
void process(T a, T b) {
    cout << "Processing two parameters of same type: " << a << " and " << b << endl;
}
template <typename T1, typename T2>
void process(T1 a, T2 b) {
    cout << "Processing two parameters of different types: " << a << " and " << b << endl;
}
int main() {
    process(10);
    process(20, 30);
    process(40, 3.14);
    process('A', string("Hello"));
    return 0;
}
