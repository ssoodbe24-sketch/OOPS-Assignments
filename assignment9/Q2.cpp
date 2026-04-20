#include <iostream>
#include <fstream>
using namespace std;
void countAlphabets() {
  ifstream inFile("NOTES.TXT");
    if(!inFile) {
        cout << "Error: Could not open NOTES.TXT" << endl;
      return;
    }
   char ch;
     int count = 0;
   while(inFile.get(ch)) {
        if(isalpha(ch)) {   
            count++;
        }
    }
    inFile.close();
     cout << "Number of alphabets in NOTES.TXT = " << count << endl;
}
  int main() {
 countAlphabets();
    return 0;
}
