#include<iostream>
#include<vector>
using namespace std;

// at funcn= accessing a vaue at a particular index

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
        cout << v.at(0) << endl; // accessing the first element
        cout << v.at(3) << endl;
        return 0;
}