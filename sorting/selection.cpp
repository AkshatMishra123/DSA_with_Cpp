#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Improved readability
        int min_index = i;
        for (int j = i + 1; j < n; j++) {  // No need for `<= n-1`
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]); // Built-in swap function
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n]; // Variable-length array (VLA) in C++ (C++11+ prefers vector)
    
    for (int i = 0; i < n; i++) cin >> arr[i];

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  // Ensure proper formatting

    return 0;
}
