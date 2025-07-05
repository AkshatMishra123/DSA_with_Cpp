#include<iostream>
using namespace std;

// Node class for Doubly Linked List
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Doubly Linked List class
class DoublyList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    DoublyList() {
        head = NULL;
        tail = NULL;
    }

    // Insert at front
    void push_front(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Insert at back
    void push_back(int value) {
        Node* newNode = new Node(value);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Delete from front
    void pop_front() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;

        // If there's only one node
        if (head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    // Delete from back
    void pop_back() {
        if (tail == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = tail;

        // If there's only one node
        if (head == tail) {
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
    }

    // Print list from front
    void print_forward() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << endl;
    }

    // Print list from back
    void print_backward() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->data << "<=>";
            temp = temp->prev;
        }
        cout << endl;
    }
};

// Main function to test
int main() {
    DoublyList dll;

    dll.push_front(10);
    dll.push_front(5);
    dll.push_back(20);
    dll.push_back(25);

    cout << "List forward: ";
    dll.print_forward();

    cout << "List backward: ";
    dll.print_backward();

    dll.pop_front();  // Removes 5
    dll.pop_back();   // Removes 25

    cout << "\nAfter popping front and back:\n";
    cout << "List forward: ";
    dll.print_forward();

    cout << "List backward: ";
    dll.print_backward();

    return 0;
}
