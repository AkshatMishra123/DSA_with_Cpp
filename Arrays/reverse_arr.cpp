#include <iostream>
using namespace std;

//Two pointers approch

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    
    while (left < right) {
        swap(arr[left], arr[right]);  // Swap elements
        left++;
        right--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    reverseArray(arr, n);

    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}
