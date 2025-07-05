#include<iostream>
#include <climits> 
using namespace std;

int main(){


    int arr[] = {55, 41, 25, 1, -14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest = INT_MAX;

    for (int i = 0; i < n ; i++){
        // alternative of if 
        //smallest = min(arr[i], smallest);

        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
        cout << "smallest is= " << smallest << endl;
        return 0;

}