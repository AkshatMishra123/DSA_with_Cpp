#include<iostream>
using namespace std;

// Node class represents each element of the queue
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Queue class using linked list
class Queue {
    Node* head;  // Points to the front of the queue
    Node* tail;  // Points to the rear of the queue

public:
    Queue() {
        head = tail = NULL;
    }

    // Add element to the rear of the queue
    void push(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            // If queue is empty
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Remove element from the front of the queue
    void pop() {
        if (head == NULL) {
            cout << "Queue is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;

        // If queue becomes empty
        if (head == NULL) {
            tail = NULL;
        }

        delete temp;
    }

    // Return the front element of the queue
    void front() {
        if (head == NULL) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front element: " << head->data << endl;
        }
    }

    // Check if the queue is empty
    bool isempty() {
        return head == NULL;
    }

    // Display the elements of the queue
    void display() {
        if (isempty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = head;
        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display();     // Output: 10 -> 20 -> 30 -> NULL
    q.front();       // Output: Front element: 10
    q.pop();         // Removes 10
    q.display();     // Output: 20 -> 30 -> NULL
    q.front();       // Output: Front element: 20

    if (q.isempty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
