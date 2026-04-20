#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
      getline(cin, str);
     cout << "Length of string = " << str.length() << endl;
    ofstream outFile("STRING.TXT");
      outFile << str;
    outFile.close();
ifstream inFile("STRING.TXT");
     string fetched;
    getline(inFile, fetched);
    inFile.close();
    cout << "Fetched string from file: " << fetched << endl;
    return 0;
}
