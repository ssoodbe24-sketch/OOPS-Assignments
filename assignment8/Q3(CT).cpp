#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
    void show() {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};
int main() {
    Pair<int, double> p1(10, 3.14);
    p1.show();
    Pair<string, char> p2("Hello", 'A');
    p2.show();
    return 0;
}
