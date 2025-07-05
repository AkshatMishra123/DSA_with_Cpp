#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int>& arr, int tar, int st, int end) {
    if (st > end) { // Base case: target not found
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (tar > arr[mid]) {
        return recBinarySearch(arr, tar, mid + 1, end);
    } 
    else if (tar < arr[mid]) {
        return recBinarySearch(arr, tar, st, mid - 1);
    } 
    else {
        return mid; // Target found
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 7, 9, 14};
    int tar = 9;
    
    // Correct function call with proper arguments
    cout << "Index of " << tar << ": " << recBinarySearch(arr, tar, 0, arr.size() - 1) << endl;
    
    return 0;
}
