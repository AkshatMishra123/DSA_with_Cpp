#include <iostream>
#include <queue> 
using namespace std;

int main() {
    queue<int> q; 

    q.push(10);
    q.push(20);
    q.push(30);

    // Display front element
    cout << "Front element: " << q.front() << endl;  // Output: 10

    // Pop one element
    q.pop(); // removes 10

    // Display new front
    cout << "Front after pop: " << q.front() << endl; // Output: 20

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Display size of the queue
    cout << "Size of the queue: " << q.size() << endl;

    // Display all elements (not directly supported, so we copy)
    cout << "Queue elements: ";
    queue<int> temp = q; // Copy the queue
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
