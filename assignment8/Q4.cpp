#include <iostream>
using namespace std;
template <typename T>
int linearSearch(T arr[], int size, T key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}
int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    int key1 = 30;
    cout << "Searching for " << key1 << " in int array..." << endl;
    int pos1 = linearSearch(intArr, n1, key1);
    if(pos1 != -1)
        cout << "Found at index " << pos1 << endl;
    else
        cout << "Not found!" << endl;
    double dblArr[] = {3.14, 2.71, 1.41, 0.57};
    int n2 = sizeof(dblArr) / sizeof(dblArr[0]);
    double key2 = 1.41;
    cout << "\nSearching for " << key2 << " in double array..." << endl;
    int pos2 = linearSearch(dblArr, n2, key2);
    if(pos2 != -1)
        cout << "Found at index " << pos2 << endl;
    else
        cout << "Not found!" << endl;
    char charArr[] = {'a', 'b', 'c', 'd'};
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
    char key3 = 'd';
    cout << "\nSearching for '" << key3 << "' in char array..." << endl;
    int pos3 = linearSearch(charArr, n3, key3);
    if(pos3 != -1)
        cout << "Found at index " << pos3 << endl;
    else
        cout << "Not found!" << endl;

    return 0;
}
