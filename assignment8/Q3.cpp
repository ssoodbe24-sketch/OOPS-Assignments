#include <iostream>
using namespace std;
template <typename T>
void bubbleSort(T arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void display(T arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Original int array: ";
    display(intArr, n1);
    bubbleSort(intArr, n1);
    cout << "Sorted int array:   ";
    display(intArr, n1);
    double dblArr[] = {3.14, 2.71, 1.41, 0.57};
    int n2 = sizeof(dblArr) / sizeof(dblArr[0]);
    cout << "\nOriginal double array: ";
    display(dblArr, n2);
    bubbleSort(dblArr, n2);
    cout << "Sorted double array:   ";
    display(dblArr, n2);
    return 0;
}
