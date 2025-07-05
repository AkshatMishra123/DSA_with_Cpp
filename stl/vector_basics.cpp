#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec; // size 0
    vec.push_back(10);  // T.C = O(1)
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout << "Size of vector: " << vec.size() << endl;

    // For-each loop to print vector elements
    cout << "Vector elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    vec.pop_back(); // Removes 50 (pop_back does not take arguments)
    cout << "Size of vector after pop_back: " << vec.size() << endl;

    // Accessing elements
    cout << "Value at 2nd index: " << vec[2] << endl;
    // or we can use at()
    cout << "Value at 2nd index (using at()): " << vec.at(2) << endl;

    // Front and back of vector
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    // Initializing vector with specific values
    vector<int> vec1(3, 10);
    cout << "Vector vec1 elements: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // Erase function T.C = O(n)
    vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7};

    // Erase the first element
    vec3.erase(vec3.begin());

    cout << "Vector vec3 after erasing first element: ";
    for (int val : vec3) {
        cout << val << " ";
    }
    cout << endl;

    // Erase a range: removes elements at index 1 and 2 (values 3 and 4)
    vec3.erase(vec3.begin() + 1, vec3.begin() + 3);

    cout << "Vector vec3 after erasing elements at index 1 and 2: ";
    for (int val : vec3) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
