#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    // doubly linked list

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.emplace_back(6);
    l.emplace_front(5);
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

}