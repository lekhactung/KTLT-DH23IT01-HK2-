#include <iostream>
#define MAX_SIZE 1000 
using namespace std;

class Queue {
private:
    int front;
    int rear;
    int size;
    int* arr;

public:
    Queue(int s) : front(-1), rear(-1), size(s) {
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }
    bool isEmpty() {
        return (front == -1);
    }
    bool isFull() {
        return (rear == size - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Hang doi day, khong the them.\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        arr[++rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Hang doi rong khong the xoa phan tu\n";
            return;
        }
        cout << "Phan tu: " << arr[front] << endl;
        if (front >= rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Hang doi rong\n";
            return;
        }
        cout << "Cac phan tu trong queue : ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    
    return 0;
}
