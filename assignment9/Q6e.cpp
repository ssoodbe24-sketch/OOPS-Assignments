#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("data.txt");
    fout << "This is line 1\nThis is line 2\nThis is line 3";
    fout.close();
    ifstream fin("data.txt");
    fin.seekg(10); 
    cout << "Current position: " << fin.tellg() << endl;
    char ch;
    cout << "Remaining content:\n";
    while(fin.get(ch)) {
        cout << ch;
    }
    fin.close();
    return 0;
}
