#include<iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor called\n";
    }

    ~Sample() {
        cout << "Destructor called\n";
    }
};

int main() {
    Sample s1; // Constructor and destructor called automatically

    Sample* s2 = new Sample(); // Constructor called
    delete s2;                 // Destructor called manually

    return 0;
}
