#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("alpha.txt");
    fin.seekg(-1, ios::end);
    char ch;
    fin.get(ch);
    cout << "Last character: " << ch;
    fin.close();
    return 0;
}
