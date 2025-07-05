#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//function
vector<int> prevSmallerElement(vector<int> arr){
    vector<int> ans(arr.size(), 0);
    stack<int> s;
    for(int i = 0; i < arr.size(); i++){
        while(s.size() > 0 && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        } else {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr = {3, 1, 0, 8, 6};
    vector<int> ans = prevSmallerElement(arr);
    for (int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

// T.C = there are n elem in arr, at max we push and pop an elem
// thus, O(2n) + outer loop O(n)
// overall t.c = ~O(n)

// s.c = O(n) in worst case
