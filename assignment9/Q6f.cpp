#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("hello.txt", ios::out | ios::in);
    string text = "HelloWorld";
    for(int i = 0; i < text.length(); i++) {
        file.put(text[i]);
        cout << "Position after writing '" << text[i] << "': " << file.tellp() << endl;
    }
    file.seekp(5);  // position of W
    file << "C++";
    file.close();
    cout << "\nReplacement done!";
    return 0;
}
