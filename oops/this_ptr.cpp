#include<iostream>
using namespace std;

class Teacher {
    string name;

public:
    void setName(string name) {
        this->name = name; // 'this' refers to the current object
    }                      // the name on r.h.s is a parameter

    void printName() {
        cout << "Name: " << this->name << endl;
    }
};

int main() {
    Teacher t1;
    t1.setName("Akshat");
    t1.printName();

    return 0;
}
