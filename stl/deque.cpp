#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    // doubly ended queue
    //dynamic array
    
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.emplace_back(6);
    d.emplace_front(5);
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;
    // since a dynamic array access of idx is valid
    cout << "third idx of deque is: " << d[3] ;

}