#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile("source.txt");
      ofstream outFile("destination.txt");
    if(!inFile || !outFile) {
        cout << "Error: Could not open files!" << endl;
        return 1;
    }
    char ch;
    while(inFile.get(ch)) {
        outFile.put(ch);   
    }
    inFile.close();
      outFile.close();
    cout << "File copied successfully!" << endl;
    return 0;
}
