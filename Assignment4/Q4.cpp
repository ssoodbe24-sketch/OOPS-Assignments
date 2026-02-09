#include <iostream>
using namespace std;
class Sample {
    int x;
public:
    void set(int a) {
        x = a;
    }
    void show() {
        cout << "Value of x = " << x << endl;
    }
};
int main() {
    int *iptr = new int;
    *iptr = 10;
    cout << "Integer value = " << *iptr << endl;
    delete iptr;
    float *fptr = new float;
    *fptr = 5.5;
    cout << "Float value = " << *fptr << endl;
    delete fptr;
    int *iarr = new int[3];
    iarr[0] = 1;
    iarr[1] = 2;
    iarr[2] = 3;
    cout << "\nInteger Array: ";
    for (int i = 0; i < 3; i++)
        cout << iarr[i] << " ";
    delete[] iarr;
    float *farr = new float[3];
    farr[0] = 1.1;
    farr[1] = 2.2;
    farr[2] = 3.3;
    cout << "\nFloat Array: ";
    for (int i = 0; i < 3; i++)
        cout << farr[i] << " ";
    delete[] farr;
    Sample *obj = new Sample;
    obj->set(100);
    cout << "\n\nSingle Object: ";
    obj->show();
    delete obj;
    Sample *objArr = new Sample[2];
    objArr[0].set(200);
    objArr[1].set(300);
    cout << "\nArray of Objects:" << endl;
    objArr[0].show();
    objArr[1].show();
    delete[] objArr;
return 0;
}
