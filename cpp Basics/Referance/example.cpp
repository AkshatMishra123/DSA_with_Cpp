#include <iostream>
using namespace std;

// Pass by value: The original array is not modified
void passByValue(int arr[], int size) {
    arr[0] = 99; // Modify the first element
    cout << "Inside passByValue function: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Pass by reference: The original array is modified
void passByReference(int (&arr)[5], int size) {
    arr[0] = 99; // Modify the first element
    cout << "Inside passByReference function: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    
    cout << "Before passByValue function: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    passByValue(arr1, 5);  // Pass array by value
    
    cout << "After passByValue function: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";  // No change in arr1
    }
    cout << endl;

    cout << "Before passByReference function: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    passByReference(arr2, 5);  // Pass array by reference
    
    cout << "After passByReference function: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";  // Change in arr2
    }
    cout << endl;

    return 0;
}
