#include<iostream>
#include<vector>
using namespace std;

// celebrity problem - two pointers method
int getCelebrity(vector<vector<int>> arr) {
    int n = arr.size();
    int i = 0, j = n-1;

    // Find the candidate
    while(i < j) {
        if(arr[i][j] == 1) {
            i++; // i cannot be celebrity
        } else {
            j--; // j cannot be celebrity
        }
    }

    // Verify the candidate
    int candidate = i;
    for(int k = 0; k < n; k++) {
        if(k != candidate) {
            if(arr[candidate][k] == 1 || arr[k][candidate] == 0) {
                return -1; // Not a celebrity
            }
        }
    }

    return candidate; // Celebrity found
}

int main() {
    vector<vector<int>> arr = {{0,1,0}, {0,0,0}, {0,1,0}};
    int ans = getCelebrity(arr);
    cout << "Celebrity is: " << ans << endl;
    return 0;
}
