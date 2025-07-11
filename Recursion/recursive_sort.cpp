#include<iostream>
#include<vector>
using namespace std;

// check if array is sorted via bool value

bool isSorted(vector<int> arr, int n){
    if (n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main(){
    vector<int> arr = {7, 2, 3, 4, 5};
    cout << isSorted(arr, arr.size()) << endl;
    return 0;
}