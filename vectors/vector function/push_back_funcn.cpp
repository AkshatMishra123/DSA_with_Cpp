#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    cout << "after push back size = " << vec.size() << endl;

    //print the value after push back via for each loop
    for(int val : vec){
        cout << val << endl;
    }
    return 0;
    
}