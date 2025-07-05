#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        next = nullptr;  // By default, the next pointer is set to NULL
    }
};

// Class for the Linked List
class LinkedList {
private:
    Node* head;  // Pointer to the first node (head of the list)

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = nullptr;
    }

    // Function to add a new node at the end
    void append(int value) {
        Node* newNode = new Node(value);  // Create a new node

        if (head == nullptr) {  // If list is empty, set newNode as head
            head = newNode;
            return;
        }

        // Traverse to the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;  // Link last node to the new node
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;

        if (temp == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        // Traverse and print each node
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Function to delete a node by value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        // If the head node itself holds the key to be deleted
        if (head->data == value) {
            Node* temp = head;
            head = head->next;  // Move head to the next node
            delete temp;
            return;
        }

        // Find the node to be deleted
        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If value was not found in the list
        if (temp == nullptr) {
            cout << "Value not found in the list!" << endl;
            return;
        }

        prev->next = temp->next;  // Unlink the node
        delete temp;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

// Main function to test the linked list
int main() {
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "Linked List: ";
    list.display();

    cout << "Deleting node with value 20..." << endl;
    list.deleteNode(20);
    
    cout << "Updated Linked List: ";
    list.display();

    return 0;
}
