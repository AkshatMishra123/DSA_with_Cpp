#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// celebrity problem - stack based method
int getCelebrity(vector<vector<int>> arr) {
    int n = arr.size();
    stack<int> st;

    // Step 1: Push all people into the stack
    for(int i = 0; i < n; i++) {
        st.push(i);
    }

    // Step 2: Eliminate non-celebrities
    while(st.size() > 1) {
        int A = st.top();
        st.pop();
        int B = st.top();
        st.pop();

        if(arr[A][B] == 1) {
            // A knows B, A cannot be celebrity
            st.push(B);
        } else {
            // A does not know B, B cannot be celebrity
            st.push(A);
        }
    }

    // Step 3: Possible candidate
    int candidate = st.top();

    // Step 4: Verify the candidate
    for(int i = 0; i < n; i++) {
        if(i != candidate) {
            if(arr[candidate][i] == 1 || arr[i][candidate] == 0) {
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
