#include<iostream>
#include<vector>
using namespace std;

//celebrity problem - brute force
int getCelebrity(vector<vector<int>> arr){
    int n = arr.size();
    vector<int> knowMe(n, 0);
    vector<int> iKnow(n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1){
                knowMe[j]++;
                iKnow[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(knowMe[i] == n-1 && iKnow[i] == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<vector<int>> arr = {{0,1,0}, {0,0,0}, {0,1,0}};
    int ans = getCelebrity(arr);
    cout << "Celebrity is: " << ans << endl;
    return 0;
}