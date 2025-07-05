#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= 5; i++){
        sum += i;
        if(i==3){
            break;
        } 
    }
    cout << "sum is : " << sum << endl;
    return 0;
} 