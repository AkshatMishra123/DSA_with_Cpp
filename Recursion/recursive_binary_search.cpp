#include<iostream>
#include<vector>
using namespace std;
int binSearch(vector<int> & arr, int tar, int st, int end){
    if (st > end)
    return -1;

        int mid = st + (end - st) / 2;
        if (arr[mid] == tar)
        return mid;
        else if (arr[mid] <= tar)
        return binSearch(arr, tar, mid+1, end);
    else
    return binSearch(arr, tar, st, mid - 1);
    
    
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int target = 2;
    int result = binSearch(arr, target, 0, n-1);

    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
    cout << "Element is not present in array" << endl;

    return 0;
    }

// T.C & s.c = O(logn)