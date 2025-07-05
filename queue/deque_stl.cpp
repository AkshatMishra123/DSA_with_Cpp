#include <iostream>
#include <deque> // for STL deque
using namespace std;

int main() {
    deque<int> dq;

    // Push elements to the back (similar to queue)
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // Display front element
    cout << "Front element: " << dq.front() << endl; // Output: 10

    // Pop element from the front
    dq.pop_front(); // removes 10

    // Display new front
    cout << "Front after pop: " << dq.front() << endl; // Output: 20

    // Check if the deque is empty
    if (dq.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

    // Display size
    cout << "Size of deque: " << dq.size() << endl;

    // Display all elements
    cout << "Deque elements: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
