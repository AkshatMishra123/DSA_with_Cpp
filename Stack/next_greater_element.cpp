#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans(arr.size());
    stack<int> s;

    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }

    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
