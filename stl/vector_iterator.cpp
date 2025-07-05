#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

    // Iterators
    cout << "Forward iteration using iterators:\n";
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end() - 2; it++) {
        cout << *it << " "; // Dereferencing the iterator
    }
    cout << "\n\n";

    // Reverse loop with iterators
    cout << "Reverse iteration using iterators:\n";
    vector<int>::reverse_iterator it1;
    for (it1 = vec.rbegin(); it1 != vec.rend(); it1++) {
        cout << *it1 << " "; // Dereferencing the reverse iterator
    }
    cout << "\n";

    //we dont have to define "vector<int>::iterator it" , we can simply use auto keyword
    cout << "Forward iteration using iterators with auto keyword:\n";
    for(auto it3 = vec.rbegin(); it3 != vec.rend(); it3++){
        cout << *it3 <<" ";
    }
    cout << endl;

    return 0;
}
