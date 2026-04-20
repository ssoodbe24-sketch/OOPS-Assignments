#include <iostream>
using namespace std;
template <typename T>
T findMin(T arr[], int size) {
    T minVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];   
        }
    }
    return minVal;
}
int main() {
    int intArr[] = {10, 3, 25, 7, 1};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Minimum in int array = " << findMin(intArr, n1) << endl;
    double dblArr[] = {2.5, 0.9, 3.14, 1.1};
    int n2 = sizeof(dblArr) / sizeof(dblArr[0]);
    cout << "Minimum in double array = " << findMin(dblArr, n2) << endl;
    char charArr[] = {'z', 'a', 'm', 'k'};
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
    cout << "Minimum in char array = " << findMin(charArr, n3) << endl;
    return 0;
}
