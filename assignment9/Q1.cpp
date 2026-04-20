#include <iostream>
#include <fstream>   
using namespace std;
int main() {
    ofstream outFile("NUM.TXT");
    if(!outFile) {
        cout << "Error: Could not create file!" << endl;
        return 1; 
    }
    for(int i = 1; i <= 200; i++) {
        outFile << i << endl; 
    }
    outFile.close();
    cout << "Numbers 1 to 200 written successfully to NUM.TXT" << endl;
    return 0;
}
