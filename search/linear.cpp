#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
        }
int main(){
    int arr[] = {8, 5, 7 ,8 , 9, 3};
    int sz = 6;
    int target = 8;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}