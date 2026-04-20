#include <iostream>
using namespace std;
template <typename T>
class Queue {
private:
    T arr[10];   
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    void enqueue(T value) {
        if(rear == 9) {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
            return;
        }
        if(front == -1) front = 0;
        arr[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    T dequeue() {
        if(front == -1 || front > rear) {
            cout << "Queue Underflow! Nothing to dequeue." << endl;
            return T();
        }
        cout << "Dequeued: " << arr[front] << endl;
        return arr[front++];
    }
    void show() {
        if(front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue contents: ";
        for(int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.show();
    q.dequeue();
    q.show();
    return 0;
}
