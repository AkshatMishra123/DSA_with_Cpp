#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;       // Dynamic array
    int size;       // Maximum size of queue
    int front;      // Index of front element
    int rear;       // Index of rear element

public:
    // Constructor
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Check if queue is full
    bool isFull() {
        return ((rear + 1) % size) == front;
    }

    // Enqueue operation (add element to rear)
    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << val << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = val;
        cout << "Enqueued: " << val << endl;
    }

    // Dequeue operation (remove element from front)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;

        if (front == rear) {
            // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    // Get the front element
    void getFront() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    // Get the rear element
    void getRear() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Rear element: " << arr[rear] << endl;
        }
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    // Destructor
    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    CircularQueue q(5);  // Create a circular queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // This should be full now

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70); // Reusing space after circular shift

    q.display();

    q.getFront();
    q.getRear();

    return 0;
}
