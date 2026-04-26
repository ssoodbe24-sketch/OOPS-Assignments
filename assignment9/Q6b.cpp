#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("alpha.txt", ios::in | ios::out);
    file.seekp(4);  
    file.put('X'); 
    file.close();
    cout << "5th character overwritten with X";
    return 0;
}
