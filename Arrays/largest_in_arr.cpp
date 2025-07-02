#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {120, -15, 32, -4, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = INT_MIN;

    for (int i = 0; i < n ; i++){
        // alternative of if 
        largest = max(arr[i], largest);
        // if (arr[i] > largest){
        //     largest = arr[i];
        // }
        
    }
    cout << "largest is: " << largest << endl;
        return 0;
}