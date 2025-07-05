/* Idea = utilize stack LIFO property  to recursively sort the stack*/
#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> & stk, int elem){
    if(stack.empty() || stk.pop() <= elem){
        stk.push(elem);
        return;
    }
    // pop the top element
    int topElem = stk.top();
    stk.pop();
    // Recursivey insert element into sorted stack
    insertSorted(stk, elem);
    // push top element back after insertion
    stk.push(topElem);
}
