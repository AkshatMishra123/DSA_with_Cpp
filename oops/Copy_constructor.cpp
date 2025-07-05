#include<iostream>
using namespace std;

class Teacher {
    string name;
    string subject;

public:
    // Parameterized constructor
    Teacher(string n, string s) {
        name = n;
        subject = s;
        cout << "✅ Parameterized constructor called\n";
    }

    // Copy constructor
    Teacher(const Teacher &t) {
        name = t.name;
        subject = t.subject;
        cout << "✅ Copy constructor called\n";
    }

    void display() {
        cout << "Name: " << name << ", Subject: " << subject << endl;
    }
};

int main() {
    Teacher t1("Akshat", "DSA");   // Parameterized constructor
    Teacher t2 = t1;               // Copy constructor is called here

    t1.display();
    t2.display();

    return 0;
}
