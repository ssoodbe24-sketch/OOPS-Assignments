#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("alpha.txt");
    for(char ch = 'A'; ch <= 'Z'; ch++) {
        fout << ch;
    }
    fout.close();
    ifstream fin("alpha.txt");
    fin.seekg(9);  
    char ch;
    fin.get(ch);
    cout << "10th character: " << ch;
    fin.close();
    return 0;
}
