#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream out("AZ.TXT");
    for(char c = 'A'; c <= 'Z'; c++) {
        out << c;
    }
   out.close();
   ifstream in("AZ.TXT");
   in.seekg(9);
  char ch;
   in.get(ch);
  cout << "10th character = " << ch << endl;
   in.close();
   return 0;
}
