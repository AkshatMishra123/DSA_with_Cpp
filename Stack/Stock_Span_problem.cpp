#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {

    // Input stock prices for consecutive days
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    
    // Initialize answer vector with 0s, same size as price
    vector<int> ans(price.size(), 0);
    
    // Stack to keep track of indices of previous higher stock prices
    stack<int> s;

    // Iterate through each day's price
    for(int i = 0; i < price.size(); i++){
        
        // Pop all prices from the stack that are less than or equal to current price
        // This ensures the top of stack is the most recent day with higher price
        while(s.size() > 0 && price[s.top()] <= price[i]){
            s.pop();
        }

        // If stack is empty, no previous higher price -> span is i+1
        if(s.size() == 0){
            ans[i] = i + 1;
        } else {
            // Else, span is the difference between current index and index of last higher price
            ans[i] = i - s.top();
        }

        // Push current index onto the stack
        s.push(i);
    }

    // Print the result: span for each day
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
