#include<iostream>
#include<list>  // Using list for dynamic stack implementation
using namespace std;

class Stack {
    list<int> ll;  // Internal linked list to store stack elements

public:
    // Push operation: Inserts an element at the front of the list
    void push(int val) {
        ll.push_front(val);  // O(1) time complexity
    }

    // Pop operation: Removes the top element from the stack
    void pop() {
        if (!ll.empty()) {
            ll.pop_front();  // Removes the element from the front
        }
    }

    // Top operation: Returns the top element of the stack
    int top() {
        if (!ll.empty()) {
            return ll.front();  // Front of the list is the top of the stack
        }
        return -1; // Stack is empty
    }

    // Empty check: Returns true if the stack is empty
    bool empty() {
        return ll.empty();
    }
};

int main() {
    Stack s;

    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Pop and print elements until stack is empty
    while (!s.empty()) {
        cout << s.top() << endl;  // Print top element
        s.pop();                  // Remove top element
    }

    cout << endl;
    return 0;
}
