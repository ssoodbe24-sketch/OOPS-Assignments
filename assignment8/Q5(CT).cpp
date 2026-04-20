#include <iostream>
using namespace std;
template <typename T>
class Array {
private:
    T arr[10];
    int size;
public:
    Array(int n) {
        size = n;
    }
    void input() {
        cout << "Enter " << size << " elements:\n";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void show() {
        cout << "Array elements: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Array<int> intArr(5);
    intArr.input();
    intArr.show();
    Array<double> dblArr(3);
    dblArr.input();
    dblArr.show();
    return 0;
}
