#include <iostream>
using namespace std;
template <typename T>
class Stack {
private:
    T arr[10];  
    int top;    

public:
    Stack() {
        top = -1;
    }
    void push(T value) {
        if(top >= 9) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed: " << value << endl;
        }
    }
    T pop() {
        if(top < 0) {
            cout << "Stack Underflow! Nothing to pop." << endl;
            return T(); 
        } else {
            cout << "Popped: " << arr[top] << endl;
            return arr[top--];
        }
    }
    void show() {
        if(top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack contents: ";
            for(int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.show();
    intStack.pop();
    intStack.show();
    cout << endl;
    Stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.show();
    charStack.pop();
    charStack.show();
    return 0;
}
